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
};

void insertathead(Node* &head,int data){
    if(head==NULL){
        Node* temp=new Node(data);
        head=temp;
    }
    else{
        Node* temp=new Node(data);
        temp->next=head;
        head=temp;
    }
}

void insertattail(Node* &tail,int data){
    if(tail==NULL){
        Node* temp=new Node(data);
        tail=temp;
    }
    else{
        Node* temp=new Node(data);
        tail->next=temp;
        tail=tail->next;
    }
}

void insertatposition(Node* &head,Node* &tail,int data,int pos){
    if(pos==1){
        insertathead(head,data);
        return;
    }
    int cnt=1;
    Node* temp=head;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertattail(tail,data);
        return;
    }
    else{
        Node* newnode = new Node(data);
        newnode->next=temp->next;
        temp->next=newnode;
    }
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
Node *node1 = new Node(10);
Node *head=node1;
Node *tail=node1;

print(head);

insertathead(head,23);

print(head);

insertattail(tail,45);
print(head);

insertatposition(head,tail,67,3);
print(head);
}