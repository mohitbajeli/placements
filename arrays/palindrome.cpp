//not case sensitive

#include<bits/stdc++.h>

using namespace std;

bool valid(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    } 
}

char tolower(char s){
    if(s>='a' && s<='z'){
        return s;
    }
    else{
        char temp = s-'A'+'a'
    }
}

bool checkpalindrome(string n){
string temp = "";
for(int j=0;j<n.length();j++){
    if(valid(s[j])){
        temp.push_back(s[j]);
    }
}
for(int j=0;j<n.length();j++){
    temp[j] = tolower(temp[j]);
}
}

int main(){

}