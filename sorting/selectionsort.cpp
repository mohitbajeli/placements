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
    int arr[]={7,1,3,2,4,5};

   cout<<"sorted array is"<<endl;
   
   selectionsort(arr,6);
   for(int i=0;i<6;i++){
      cout<<arr[i]<<" ";
   }
}