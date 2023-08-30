#include<bits/stdc++.h>

bool ispossible(int arr[],int n,int m,int mid){
int studentcount=1;
int pagesum=0;
for(int i=0;i<n;i++){
    if(pagesum+arr[i]<=mid ){
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

int book(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int ans=0;
    int e=sum;
    int mid=s+(sum-s)/2;
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


using namespace std;

int main()
{
    int arr[4]={10,20,30,40};
    int m=2;
   cout<<"minimum is "<<book(arr,4,m);
}