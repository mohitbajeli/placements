#include<bits/stdc++.h>

using namespace std;

int substring(string s){

    int n = s.length();

    if(n<3){
        return 0;
    }
    char a = s.charAt(0);
    char b=s.charAt(1)
    char c=s.charAt(2);
    int count = 0;

    for(int i=3;i<n;i++){
        if(a!=b && b!=c && c!=a)count++;

        a=b;
        b=c;
        c=s.charAt(i);
    }
    if(a!=b && b!=c && c!=a)count++;

    return count;
}

int main(){
    string s="xyzzaz";

    cout<<"substring is "<<substring(s);
}