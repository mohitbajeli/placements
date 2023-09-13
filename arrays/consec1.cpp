#include<bits/stdc++.h>

using namespace std;

int consecutive(int arr[],int n)
{
    int count =0;
    int maxi = 0;

    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxi=max(count,maxi);
        }
        else{
            count=0;
        }
    }
    return maxi;
}

int main(){

int arr[]={1,1,0,0,1,1,1,0};

cout<<"max consecutive 1 are "<<consecutive(arr,8);
return 0;

}