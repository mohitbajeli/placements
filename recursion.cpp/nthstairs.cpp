#include<bits/stdc++.h>

using namespace std;

int stairs(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }

    return stairs(n-1)+stairs(n-2);
}

int main(){
int n;
cout<<"enter no of stairs"<<endl;
cin>>n;

cout<<"no of ways are "<<stairs(n);

return 0;
}