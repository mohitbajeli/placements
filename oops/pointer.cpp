#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={2,4,6,7,8};
    int e=2;
    int arr2[6];
    int k=0;
    int *p;
    p=arr;

   
  for(int i=0;i<5;i++){
    if((*p)%e==0){
        arr2[k]=arr[i];
        k++;
    }
    p++;
  }

  for(int i=0;i<k;i++){
    cout<<arr2[i]<<" ";
  }
}