#include<bits/stdc++.h>

using namespace std;

char maxoccurence(string s){
    int arr[26]={0};

    
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int number=0;
        if(ch>='a' && ch<='z'){
               number=ch-'a';
        }
        else{
            number=ch-'A';
        }
        arr[number]++;
    }
    int ans=-1;
    int maxi=-1;

    for(int i=0;i<26;i++){
         if(maxi<arr[i]){
            maxi=arr[i];
            ans=i;
         }
    }
    char val='a'+ans;
    return val;
}

int main(){
string s="I aaassaqaam the bettst";
cout<<"maximum occuring character is "<<maxoccurence(s);
return 0;
}
