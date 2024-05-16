#include<bits/stdc++.h>

using namespace std;

int decimal(int n){
    int i=0;
    int bin=0;
    while(n!=0){
        int x=n%10;
        if(x){
            int a=pow(2,i);
            bin+=a;
            i++;
        }
        else{
            i++;
        }
        n=n/10;
    }
    return bin;
}

int main(){
    int n=110;
    int num=decimal(n);
    cout<<"decimal no is"<<num;
}