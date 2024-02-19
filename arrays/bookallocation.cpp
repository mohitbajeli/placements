#include<bits/stdc++.h>

using namespace std;

bool ispossible(int arr[],int n,int m,int mid){
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

int allocation(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int ans=-1;
    int e=sum;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(ispossible(arr,n,m,mid)){
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
int main(){
    int arr[]={10,20,30,40};
    cout<<"max no of pages allocated which is minimum is "<<allocation(arr,4,2);
    return 0;
}