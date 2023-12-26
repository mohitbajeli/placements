#include<bits/stdc++.h>

using namespace std;

int partition(int arr[],int lb,int ub){
    int pivot = arr[lb];
    int start = lb;
    int end = ub;

    while(start<end){
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
            swap(arr[start],arr[end]);
        }
    }
    swap(arr[lb],arr[end]);
    return end;
}

void quicksort(int arr[],int lb,int ub){
    if(lb<ub){
        int p = partition(arr,lb,ub);
        quicksort(arr,lb,p-1);
        quicksort(arr,p+1,ub);
    }
}

int main(){
    int arr[]={3,1,2,5,6};
    quicksort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}