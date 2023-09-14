#include<bits/stdc++.h>

int pivot(int arr[],int n)
{
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
    return mid;
}

using namespace std;

int main(){
    int arr[5]={7,8,1,2,3};
    cout<<"pivot element is "<<pivot(arr,5);
    return 0;
}