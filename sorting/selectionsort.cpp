#include<bits/stdc++.h>

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void selectionsort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(&arr[i],&arr[minindex]);
    }
}

using namespace std;

int main(){
    int arr[]={7,1,4,3,2};

    selectionsort(arr,5);

    cout<<"sorted array is "<<endl;

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}