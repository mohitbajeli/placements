#include<bits/stdc++.h>

using namespace std;

int minjumps(int arr[],int n){
    int maxr=arr[0];
    int steps=arr[0];
    int jumps=1;

    if(n==0){
            return 0;
        }
        else if(arr[0]==0){
            return 0;
        }
        else{
    for(int i=1;i<n;i++)
    {
        
        if(i==n-1){
            return jumps;
        }
        maxr=max(maxr,i+arr[i]);
        steps--;
        if(steps==0){
            jumps++;

            if(i>=maxr){
                return 0;
            }
            steps=maxr-i;
        }
    }
        }
}

int main(){
    int arr[]={1,3,2,4,5,6};
    int jumps = minjumps(arr,6);
    cout<<"minimum jumps are "<<jumps;
}