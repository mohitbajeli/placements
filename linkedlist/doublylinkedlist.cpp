#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int val = this->data;
        if(next!=NULL){
            delete next;
            next = NULL;
        
        }
        cout<<"memory freed with node "<<val<<endl;
    }
};

void InsertAtHead(Node* &head,Node * &tail,int data){
    if(head==NULL){
       Node *temp = new Node(data);
       head=temp;
       tail = temp;
    }
    else{
   Node *temp = new Node(data);
   temp->next = head;
   head = temp;
   
    }
}

void InsertAttail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node *temp = new Node(data);
        tail=temp;
        head=temp;
    }
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev=tail;
    tail = temp;
}

void InsertAtposition(Node* &head,Node* &tail,int pos,int data){
    if(pos == 1){
        InsertAtHead(head,tail,data);
        return ; 
    }
    int cnt=1;
    Node *temp = head;
    while(cnt<pos-1){
      temp=temp->next;
      cnt++;
    }
    if(temp->next == NULL){
        InsertAttail(head,tail,data);
        return ;
    }
    Node *newnode = new Node(data);
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next=newnode;
    newnode->prev=temp;


}

void deletenode(Node* &head,Node* &tail,int pos){
    if(pos==1){
    Node* temp = head;
    temp->next->prev = NULL;
    head=temp->next;
    temp->next=NULL;
    delete temp;
    }
    else{
      Node* curr = head;
      Node* temp = NULL;
      int cnt =1;
      while(cnt<pos){
        temp = curr;
        curr = curr->next;
        cnt++;
      }  
    temp->next = curr->next;
    curr->next->prev = temp;
    curr->prev-NULL;
    curr->next=NULL;
     delete curr;

    }
}

void print(Node * &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

int main(){
Node *node1 = new Node(10);

Node *head = node1;
Node *tail = node1;
print(head);
InsertAtHead(head,tail,23);
print(head);
InsertAtHead(head,tail,24);
print(head);
InsertAttail(head,tail,25);
print(head);

InsertAtposition(head,tail,3,67);
print(head);
deletenode(head,tail,3);
print(head);
}