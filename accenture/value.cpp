#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={1,1,2,2,2,3,3};

    int i=0;
    for(int j=i+1;j<7;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    for(int j=0;j<i+1;j++){
        cout<<arr[j]<<" ";
    }
}