#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[6]={1,2,3,4,5};

    int pos=6;
    int element=23;
 

    for(int i=5;i>pos-2;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=element;

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}