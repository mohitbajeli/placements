#include<bits/stdc++.h>

using namespace std;

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

int main()
{
int arr[]={4,3,2,5,6};

cout<<"sorted array is "<<endl;
insertionsort(arr,5);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
}