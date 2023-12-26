#include<bits/stdc++.h>

using namespace std;

void merge(int arr[],int lb,int mid,int ub){
    int i=lb;
    int j=mid+1;
    int k=lb;
    int b[50];

    while(i<=mid && j<=ub){
        if(arr[i]<=arr[j]){
          b[k]=arr[i];
          k++;
          i++;
        }
        else{
            b[k]=arr[j];
            k++;
            j++;
        }
    }
        
        while(i<=mid){
            b[k]=arr[i];
            k++;
            i++;
        }
        
            

        while(j<=ub){
            b[k]=arr[j];
            k++;
            j++;
        }
        

    for(int l=lb;l<k;l++){
        arr[l]=b[l];
    }
}

void mergesort(int arr[],int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}

int main(){
    int arr[]={5,2,3,1,8};
    mergesort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}