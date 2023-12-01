#include<bits/stdc++.h>

using namespace std;


void sumrow(int arr[][3],int m,int n){
    int maxi=-1;
    int ans=0;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
            
        }
        if(sum>maxi){
                maxi=sum;
                ans=i+1;
            }
    }
    cout<<"largest row sum is "<<maxi<<" and row is "<<ans;
}

int main(){
    int arr[3][3]={{3,4,11},{2,12,1},{7,8,7}};
    sumrow(arr,3,3);
    return 0;
}