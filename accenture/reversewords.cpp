#include<bits/stdc++.h>

using namespace std;

void reverse(string s){

    int i=0;
    int n=s.length();

    while(i<n){
        swap(s[i],s[n]);
        i++;
        e--;
    }
}

void reversewords(string s){
    
    for(int i=0;i<s.length();i++){
        string e="";
        if(s[i]==' '){
            reverse(e);
            e="";
        }
        else if(s[i]=='\0'){
            reverse(e);
        }
        else{
            
            
        }
        

    }
}

int main(){
    string s="I love poonam";
    
    reversewords(s);

    cout<<s;
    return 0;
}