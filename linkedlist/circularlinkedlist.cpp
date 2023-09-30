#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        int val = this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory freed by the data "<<val<<endl;
    }
};

void InsertNode(Node* &tail,int element,int data){
    if(tail==NULL){
        Node *temp = new Node(data);
        tail=temp;
        temp->next = temp;
    }
    else{
        Node *temp=tail;
        while(temp->data!=element){
            temp=temp->next;
        }
        Node *curr=new Node(data);
        curr->next=temp->next;
        temp->next=curr;

    }
}

void deletenode(Node* &tail,int value){
    if(tail==NULL){
        cout<<"empty list"<<endl;
        
    }
    else{
      Node *prev = tail;
      Node *curr = prev->next;

      while(curr->data != value){
        prev=curr;
        curr=curr->next;
      }
      if(tail==curr){
          tail=prev;
      }
      prev->next = curr->next;
      curr->next = NULL;
      delete curr;
    }
}
void print(Node* &tail){
    Node* temp=tail;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=tail);
    cout<<endl;
}
int main(){
Node* tail = NULL;

InsertNode(tail,5,3);
print(tail);
InsertNode(tail,3,5);
print(tail);
InsertNode(tail,5,7);
print(tail);
InsertNode(tail,7,9);
print(tail);
InsertNode(tail,5,6);
print(tail);
deletenode(tail,3);
print(tail);

}