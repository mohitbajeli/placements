#include<bits/stdc++.h>

using namespace std;

void mergesorted(int arr1[],int arr2[],int m,int n){
    int i=0;
    int j=0;
    int k=0;
    int arr3[m+n];
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<m){
       arr3[k]=arr1[i];
       k++;
       i++;
    }
    while(j<n){
        arr3[k]=arr2[j];
        k++;
        j++;
    }

    for(int i=0;i<(m+n);i++){
        cout<<arr3[i]<<" ";
    }
}

int main(){
int arr1[]={1,3,5,7,9};
int arr2[]={2,4,6};

cout<<"merged sorted array is "<<endl;
mergesorted(arr1,arr2,5,3);
return 0;
}