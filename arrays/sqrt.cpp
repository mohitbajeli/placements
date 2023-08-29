#include<bits/stdc++.h>

long long int binarysearch(int n)
{
int s=0;
int e=n;
int mid=s+(e-s)/2;
int ans=0;
while(s<=e){
    long long int square=mid*mid;
    if(square==n){
        return mid;
    }
    else if(square<n){
        ans=mid;
        s=mid+1;
    }

    else{
       e=mid-1;
    }
    mid=s+(e-s)/2;
}
return ans;
}

using namespace std;

int main()
{
    int n=64;
    cout<<"square root is "<<binarysearch(n);
}