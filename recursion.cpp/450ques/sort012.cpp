#include<bits/stdc++.h>

using namespace std;

void sorting(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
int arr[6]={0,0,2,1,2,0};
sorting(arr,6);
cout<<"sorted array is "<<endl;
for(int i=0;i<6;i++){
  cout<<arr[i]<<" ";
}

}