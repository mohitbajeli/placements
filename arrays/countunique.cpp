#include<bits/stdc++.h>


using namespace std;

int unique(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        bool found = false;
        for(int j=i+1;j<n;j++){
            if(i==n-1){
                count++;
            }

            if(arr[i]==arr[j] && i!=j)
            found=true;
        }
        if(!found){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[]={1,2,3,1,3,5,6,3,1,8};
    cout<<"unique elements are"<<unique(arr,10);
}