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

Node *reverselinkedlist(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *prev = NULL;
    Node *curr = head;
    Node *forward;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
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
Node *head=node1;
Node *tail = node1;

InsertAtTail(tail,15);
print(head);
InsertAtTail(tail,23);
print(head);
InsertAtTail(tail,12);
print(head);
insertatposition(head,tail,3,17);
print(head);

head = reverselinkedlist(head);
print(head);

}