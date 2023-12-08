#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }

    ~Node(){
        int val = this->data;
        if(this->next!=NULL){
            this->next=NULL;
            delete(next);
        }
        cout<<"memory freed "<<val<<endl;
    }
};


void insertathead(Node* &head,int data){
    if(head==NULL){
        Node *temp=new Node(data);
        head=temp; 
    }
    else{
        Node* temp=head;
        Node* newnode = new Node(data);
        newnode->next=temp;
        temp->prev=newnode;
        head=newnode;
    }
}

void insertatposition(Node* &head,int data,int pos){
if(pos==1){
    insertathead(head,data);
}
else{
    int cnt=1;
    Node* temp=head;
    while(cnt<pos-1){
      temp=temp->next;
      cnt++;
    }
    if(temp->next==NULL){
        Node* newnode = new Node(data);
        temp->next=newnode;
        newnode->prev=temp;
    }
    else{
        Node* newnode = new Node(data);
        newnode->next = temp->next;
        newnode->prev=temp;
        temp->next->prev = newnode;
        temp->next=newnode;
    }
}
}
void deletenode(Node* &head,int pos){
if(pos==1){
    Node* temp=head;
    temp->next->prev=NULL;
    head=temp->next;
    temp->next=NULL;
    delete(temp);
}
else{
    Node* prev=NULL;
    Node* curr=head;
    int cnt=1;
    while(cnt<pos){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    if(curr->next=NULL){
        prev->next=NULL;
        curr->prev=NULL;
        delete(curr);
    }
    else{
       prev->next=curr->next;
       curr->next->prev=prev;
       curr->prev=NULL;
       curr->next=NULL;
       delete(curr);
    }

}
}
void print(Node* &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
Node* node1=new Node(10);
Node* head=node1;
print(head);
insertathead(head,3);
print(head);
insertatposition(head,56,3);
print(head);
deletenode(head,3);
print(head);
}