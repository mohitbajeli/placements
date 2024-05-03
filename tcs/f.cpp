#include<bits/stdc++.h>

using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        int count=1;
        if(arr[i]==-1){
            continue;
        }
        else{
        for(int j=i+1;j<n;j++){
           if(arr[i]==arr[j]){
            count++;
            arr[j]=-1;
           }
        }
        if(count>=(n/2)){
            cout<<arr[i];
        }
        }
    }
}

int main(){
    int arr[]={6,2,4,2,4,2,4,2,4,2,4};
    print(arr,11);
    return 0;
}