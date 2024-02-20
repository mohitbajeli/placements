#include<bits/stdc++.h>

using namespace std;

bool ispossible(int arr[],int n,int m,int mid){
    int cow=1;
    int lastpos=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]-lastpos>=mid){
            cow++;
        
        if(cow==m){
            return true;
        }
        
        lastpos=arr[i];
        }
    }
    return false;
}
int aggressive(int arr[],int n,int m){
    int s=0;
    int maxi=-1;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    int e=maxi;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(ispossible(arr,n,m,mid)){
          ans=mid;
          s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}


int main(){
    int arr[5]={1,2,3,4,6};

    cout<<"maximum value of min distance"<<aggressive(arr,5,2);
}