#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next=NULL;
    }

    ~Node(){
        int val = this->data;
        if(this->next!=NULL){
            this->next = NULL;
            delete next;
        }
        cout<<"memory freed "<<val<<endl;
    }
};

void deleteatposition(Node* &head,int pos){
    if(pos==1){
        Node *temp =head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting at middle or last
        Node *curr = head;
        Node *prev = NULL;

        int cnt=1;
        while(cnt<pos){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}


void InsertAtHead(Node* &head,int data){
    Node *temp = new Node(data);
    temp->next = head;
    head=temp;
}

void InsertAtTail(Node* &tail,int data){
    Node* temp=tail;
    Node *newnode = new Node(data);
    tail->next = newnode;
    tail=newnode;

}

void print(Node* &head){
    Node *temp=head;

    while(temp!=0){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){

Node *node1 = new Node(10);
  Node *head=node1;
  Node *tail = node1;
InsertAtHead(head,24);
print(head);
InsertAtTail(tail,34);
print(head);
deleteatposition(head,1);
print(head);

return 0;
}