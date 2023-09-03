#include<bits/stdc++.h>

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}

void bubblesort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}


using namespace std;


int main()
{
    int arr[]={6,3,2,7,1,2};

    bubblesort(arr,6);

    cout<<"sorted array is "<<endl;

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}