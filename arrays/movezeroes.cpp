#include<bits/stdc++.h>

using namespace std;



void zeroes(int arr[],int n){
    int j=0;
for(int i=0;i<n;i++){
    if(arr[i]==0){
        j=i;
        break;
    }
}

for(int i=j+1;i<n;i++){
    if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
    }
}
}

int main(){
int arr[5]={1,0,0,2,3};
zeroes(arr,5);
cout<<"array is "<<endl;
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
}