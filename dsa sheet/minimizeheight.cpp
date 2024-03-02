#include<bits/stdc++.h>


using namespace std;

int mindiff(int arr[],int n,int k){
    int ans = arr[n-1]-arr[0];

    int smallest = arr[0]+k;
    int largest = arr[n-1]-k;

    int maxi=0;
    int mini=0;

    for(int i=0;i<n-1;i++){
        maxi=max(largest,arr[i]+k);
        mini=min(smallest,arr[i+1]-k);

        if(mini<0){
            continue;
        }
        else{
            ans=min(ans,maxi-mini);
        }
    }
    return ans;
}

int main(){
    int arr[]={3,9,12,16,20};
    int k = 3;
    int ans= mindiff(arr,5,k);

    cout<<"minimum height is "<<ans;
}