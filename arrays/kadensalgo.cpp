#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={-1,-2,-3,-4,-5};


    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<5;i++){
     sum+=arr[i];

     if(sum>maxi){
        maxi=sum;
     }

     if(sum<0){
        sum=0;
     }
    }

    cout<<"max sum is "<<maxi;
}