#include<bits/stdc++.h>

int binary(int arr[],int low,int high,int key)
{
    
    
    int mid =low+ (high-low)/2;  //if we do (low+high)/2 then at one time it will go greater than 2pow31-1.
    while(low<=high)
    {
    

       if(arr[mid]==key)
       {
        return mid;
        break;
       }
       else if(arr[mid]<key)
       {
        low=mid+1;
       }
       else if(arr[mid]>key)
       {
        high = mid-1; 
       }
        mid =low+ (high-low)/2;
    }
    return -1;
}

int getpivot(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}

int  search(int arr[],int n,int key){
    int pivot= getpivot(arr,n);
    if(key>=arr[pivot] && key<arr[n-1]){
        return binary(arr,pivot,n-1,key);
    }
    else{
        return binary(arr,0,pivot-1,key);
    }
}

using namespace std;

int main()
{
int arr[5]={7,9,1,2,3};
cout<<"element is at "<<search(arr,5,3);
return 0;
}