#include<bits/stdc++.h>

using namespace std;

void insertion(int arr[],int n){
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

int main(){
    int arr[]={4,2,1,3,5,6};
    insertion(arr,6);

    cout<<"sorted array is "<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}