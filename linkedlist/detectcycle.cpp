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

bool detectloop(Node* head){
    map<Node*,bool>visited;

    if(head==NULL){
        return false;
    }
    Node *temp = head;
    while(temp!=NULL){
       if(visited[temp]==true){
        return true;
       }
       visited[temp]=true;
       temp=temp->next;
    }
    return false;
}
int main(){

Node *node1 = new Node(10);
Node *head=node1;
Node *tail = node1;

InsertAtTail(tail,15);
InsertAtTail(tail,23);
InsertAtTail(tail,12);
insertatposition(head,tail,3,17);

if(detectloop(head)){
    cout<<"loop present"<<endl;
}
else{
    cout<<"loop absent"<<endl;
}
}