#include<bits/stdc++.h>

using namespace std;

int subarray(int arr[],int n,int k){
    map<int,int>mpp;
    mpp[0]=1;
    int presum=0;
    int cnt=0;
    for(int i=0;i<n;i++){
       presum+=arr[i];
       int remove=presum-k;
       cnt+=mpp[remove];
       mpp[presum]++;
    }
    return cnt;
}

int main(){
    int arr[]={1,2,3,-3,1,1,1,4,2,-3};
    int count=subarray(arr,10,3);

    cout<<"no of subarrays are "<<count;
}