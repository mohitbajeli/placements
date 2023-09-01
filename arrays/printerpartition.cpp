#include<bits/stdc++.h>

using namespace std;

bool ispossible(int arr[],int mid,int n,int m){
    int studentcount=1;
    int pagesum=0;
     for(int i=0;i<n;i++){
    if(pagesum+arr[i]<=mid){
        pagesum+=arr[i];
    }
    else{
        studentcount++;
        if(studentcount>m || arr[i]>mid){
            return false;
        }
        pagesum=arr[i];
    }
     }
     return true;
}

int printer(int arr[],int n,int m){
    int s=0;
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int ans=0;
    int e=sum;
    int mid=s+(e-s)/2;

    while(s<=e){
    if(ispossible(arr,mid,n,m)){
        ans=mid;
        e=mid-1;
    }
    else{
        s=mid+1;
    }
       mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[]={5,5,5,5};
    int m=2;
    cout<<"minimum time is "<<printer(arr,4,2);
}