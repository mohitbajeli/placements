#include<bits/stdc++.h>

using namespace std;

class Node{
  
  public:
  int data;
  Node *next;
  //constructor 
  Node(int data){
    this->data=data;
    this->next=NULL;
  }
};


void InsertAtHead(Node* &head,int data){
   Node *temp = new Node(data);
   temp->next = head;
   head = temp;
}

void InsertAtTail(Node * &tail,int data){
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void insertatposition(Node * &head,Node* &tail,int pos,int data){
    Node *temp = head;
    if(pos ==1){
        InsertAtHead(head,data);
        return ;
    }
    int cnt =1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        InsertAtTail(tail,data);
        return ;
    }
    Node *newnode = new Node(data);
    newnode->next = temp->next;
    temp->next = newnode;
    
}
void print(Node * &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node *intersected(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}

Node* findnode(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node *intersection = intersected(head);
    Node* slow = head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}
int main(){

Node *node1 = new Node(10);
Node *head=node1;
Node *tail = node1;

InsertAtTail(tail,15);
InsertAtTail(tail,23);
InsertAtTail(tail,12);
insertatposition(head,tail,3,17);
tail->next=head->next;
Node *ans=findnode(head);
cout<<"starting node is "<<ans->data;


}