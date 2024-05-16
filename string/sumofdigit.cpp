#include<bits/stdc++.h>

using namespace std;



int main()
{
    string s="12xyz3";
    string result="";
    int j=0;
    int sum=0;
     int len=s.length();
    for(int i=0;i<s.length();i++){
        if(s[i]>='1' && s[i]<='9' ){
            result+=s[i];
        }
        else{
            sum+=stoi(result);
            result=" ";
        }
    }
    
    cout<<sum;
}