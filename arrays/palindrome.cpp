//not case sensitive

#include<bits/stdc++.h>

using namespace std;

bool valid(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return true;
    } 
    else{
        return false;
    }
}

char tolower(char s){
    if(s>='a' && s<='z'){
        return s;
    }
    else{
        char temp = s-'A'+'a';
        return temp;
    }
}

 bool ispalindrome(string s){
    int st=0;
    int e=s.length()-1;
    while(st<=e){
        if(s[st]!=s[e]){
            return false;
        }
        else{
            st++;
            e--;

        }
    }
    return true;
 }
bool checkpalindrome(string n){
string temp = "";
for(int j=0;j<n.length();j++){
    if(valid(n[j])){
        temp.push_back(n[j]);
    }
}
for(int j=0;j<n.length();j++){
    temp[j] = tolower(temp[j]);
}
return ispalindrome(temp);
}

int main(){
string s="nooN";
if(checkpalindrome(s)){
    cout<<"a palindrome";

}
else{
    cout<<"not palindrome";
}

}