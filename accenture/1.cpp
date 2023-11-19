#include<bits/stdc++.h>


using namespace std;

void swap(char *a,char *b){
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
   string s="mohit";
   int len = s.length();

   int f=0;
   int e=len-1;
   while(f<e){
    swap(s[f],s[e]);
    f++;
    e--;
   }
   cout<<s;
}