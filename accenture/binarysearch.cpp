#include<bits/stdc++.h>

using namespace std;

int binarysearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
       if(arr[mid]==key){
        return mid;
       }
       else if(arr[mid]<key){
        start=mid+1;
       }
       else{
        end=mid-1;
       }
       mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
int arr[]={1,3,5,6,8,9};
int ans=binarysearch(arr,6,6);
cout<<"at index "<<ans;
return 0;
}