#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={-2,-3,4,-1,-2,1,5,-3};


    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<8;i++){
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