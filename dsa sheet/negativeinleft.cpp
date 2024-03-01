#include<bits/stdc++.h>

using namespace std;

void negative(int arr[],int n){

    int l=0;
    int r=n-1;
    while(l<=r){
        if(arr[l]<0){
            l++;
        }
        else if(arr[l]>=0){
            swap(arr[l],arr[r]);
            r--;
        }
    }
}


int main(){
int arr[]={-12,11,-13,-5,6,-7,5,-3,-6};
negative(arr,9);

for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
}
return 0;
}