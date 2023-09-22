#include<bits/stdc++.h>

using namespace std;

void swap(char*a,char*b){
    char *temp;
    *temp=*a;
    *a=*b;
    *b=*temp;
}

void reverse(string s){

    int i=0;
    int n=s.length();

    while(i<n){
        swap(s[i],s[n]);
        i++;
        n--;
    }
}

void reversewords(string s){
    
    for(int i=0;i<s.length();i++){
        string e="";
        int j=0;
        if(s[i]==' '){
            reverse(e);
            cout<<e<<" ";
            e="";

        }
        else if(s[i]=='\0'){
            reverse(e);
            cout<<e;
        }
        else{
            e[j]=s[i];
            j++;
            
        }
        

    }
}

int main(){
    string s="I love poonam";
    
    reversewords(s);
    return 0;
}