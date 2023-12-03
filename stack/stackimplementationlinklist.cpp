#include<bits/stdc++.h>

using namespace std;

class node{
    int data;
    node *next;
    public:
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class Stack{
node *top;

Stack(){
    top=NULL;
}
void push(int data){
    node *temp = new node(data);
    if(!temp){
        cout<<"stack overflow";
    }
    temp->data = data;
    temp->next=top;
}
}

int main(){

}