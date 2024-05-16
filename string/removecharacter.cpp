#include<bits/stdc++.h>

using namespace std;



int main()
{
    string s="take@# yo*u@ fo!*rward";
    string result="";
    int j=0;
     int len=s.length();
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')|| s[i]==' ' ){
            result+=s[i];
        }
    
    }
    
    cout<<result;
}