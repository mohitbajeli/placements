#include<bits/stdc++.h>

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool flag = false;

        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                flag=true;
            }
        }
        if(flag==false){
            break;
        }
    }
}


using namespace std;


int main(){
    int arr[]={7,5,3,2,1};

    cout<<"sorted array is "<<endl;

   bubblesort(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}