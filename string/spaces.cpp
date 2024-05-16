#include<bits/stdc++.h>

using namespace std;



int main()
{
    string s="take you forward";

     int len=s.length();
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            for(int j=i;j<s.length();j++){
                s[j]=s[j+1];
            }
            i--;
            len--;
        }
    }
    cout<<s;
}