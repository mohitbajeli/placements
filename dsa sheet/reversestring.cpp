#include<bits/stdc++.h>

using namespace std;

void reverse(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6};

    cout<<"reverse array is "<<endl;
    reverse(arr,6);

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}