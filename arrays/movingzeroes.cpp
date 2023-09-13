#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={1,0,2,3,4,5,0,8,6};

    int j=-1;
    for(int i=0;i<9;i++){
      if(arr[i]==0){
        j=i;
        break;
      }
    }
    for(int i=j+1;i<9;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}