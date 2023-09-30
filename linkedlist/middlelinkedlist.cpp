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
int getlength(Node* &head){
    int cnt=0;
    Node* temp = head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;

}

Node *getlist(Node* &head){
    int len = getlength(head);
    int ans = (len/2)+1;
    Node *temp = head;
    int cnt=1;
    while(cnt<ans){
       temp=temp->next;
       cnt++;
    }
    return temp;
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
Node *list = getlist(head);
cout<<list->data;

}