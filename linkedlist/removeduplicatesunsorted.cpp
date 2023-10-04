#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void InsertAtHead(Node* &head,int data){
    if(head==NULL){
        return;
    }
    Node* temp = new Node(data);
    temp->next=head;
    head=temp;
}

void InsertAtTail(Node* &tail,int data){
    if(tail==NULL){
        return;
    }
    Node* temp=new Node(data);
    tail->next=temp;
    tail = temp;
}

Node* removeduplicate(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* curr = head;
    while(curr!=NULL){
        Node* temp=curr->next;
        Node* prev=curr;
        while(temp!=NULL){
            if(curr->data==temp->data){
                prev->next = temp->next;
                temp=temp->next;
                
                

            }
            else{
                prev=temp;
                temp=temp->next;
            }
        }
        curr=curr->next;
    }
    return head;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
Node* node1 = new Node(9);
Node* head=node1;
Node* tail=node1;
print(head);
InsertAtHead(head,10);
print(head);
InsertAtTail(tail,9);
print(head);
InsertAtHead(head,10);
print(head);
cout<<"unique linklist is "<<endl;
Node* ans = removeduplicate(head);
print(ans);
}
