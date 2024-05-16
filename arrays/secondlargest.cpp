#include<bits/stdc++.h>

using namespace std;

void secondl(int arr[],int n){
    int largest=arr[0];
    int slargest=-1;

    for(int i=0;i<n;i++){
        if(arr[i]<largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<slargest && arr[i]>largest){
            slargest=arr[i];
        }
    }
    if(slargest==-1 || largest==arr[0]){
        cout<<"not present";
    }
    cout<<"largest "<<largest<<endl;
    cout<<"slarest "<<slargest<<endl;
}

int main(){
    int arr[]={4,2,3,6,7};
    secondl(arr,5);
}