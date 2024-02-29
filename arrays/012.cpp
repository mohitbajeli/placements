#include<bits/stdc++.h>

using namespace std;

void sort(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
    int arr[]={0,2,1,2,0};
    sort(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}