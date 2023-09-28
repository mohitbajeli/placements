#include<bits/stdc++.h>

using namespace std;

int partition(int arr[],int lb,int ub){
    int pivot = arr[lb];
    int i=lb;
    int j=ub;
    while(i<=j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[lb],arr[j]);

    return j;
}

void quicksort(int arr[],int lb,int ub){
    if(lb<ub){
        int p = partition(arr,lb,ub);
        quicksort(arr,lb,p-1);
        quicksort(arr,p+1,ub);
    }
}
int main(){
int arr[]={5,3,4,21,1};

quicksort(arr,0,4);

for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
}