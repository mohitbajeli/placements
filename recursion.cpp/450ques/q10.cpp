//negative elements in one side

#include<bits/stdc++.h>

using namespace std;

void negative(int arr[],int n){
    int low=0;
    int high=n-1;
    while(low<=high){
        if(arr[low]<0){
            low++;
        }
        else{
            swap(arr[low],arr[high]);
            high--;
        }
    }
}

int main(){
int arr[9]={-12,11,-13,-5,6,-7,5,-3,-6};
negative(arr,9);
cout<<"array is"<<endl;
for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
}
}