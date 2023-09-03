#include<bits/stdc++.h>

void insertionsort(int arr[],int n){

for(int i=1;i<n;i++){
    int temp=arr[i];
    int j=i-1;
    while(j>=0){
        if(arr[j]>temp){
            arr[j+1]=arr[j];
        }
        else{
            break;
        }
        j--;
    }
    arr[j+1]=temp;
}

}

using namespace std;

int main()
{
    int arr[]={4,5,1,2,4,7};

    cout<<"sorted array is "<<endl;
   
    insertionsort(arr,6);

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}