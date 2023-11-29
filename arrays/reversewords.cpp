#include<bits/stdc++.h>

using namespace std;

void reverse(vector<char>&s)
{
    int st=0;
    int e=s.size()-1;
    while(st<=e){
        swap(s[st++],s[e--]);
    }
}


void word(vector<char>&s){
    vector<char>temp;
    int len=s.size();
    for(int i=0;i<len;i++){
        if(s[i]==" " || s[i]=='\0'){
            reverse(temp);
            temp="";
        }
        else{
            temp.push_back(s[i]);
        }
    }
}

int main(){
vector<char>s=["i"," ","l","o","v","e"," ","y","o","u"];
cout<<"reverse string is "<<endl;
for(int i=0;i<s.size();i++){
    cout<<s[i];
}
}