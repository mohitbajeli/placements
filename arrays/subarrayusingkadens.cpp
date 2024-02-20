#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={-2,-4,5,6,-1,8,-3};

    int sum=0;
    int start=0;
    int astart=-1;
    int aend=-1;
    int maxi=INT_MIN;
    
    for(int i=0;i<7;i++){
        if(sum==0){
            start=i;
        }
       sum+=arr[i];
        if(sum>maxi){
            astart=start;
            aend=i;
            maxi=sum;
        }

        if(sum<0){
            sum=0;
        }
    }

    cout<<"subarray is from "<<astart<<" to "<<aend;
}