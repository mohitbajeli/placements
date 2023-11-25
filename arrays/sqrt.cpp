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

double ans(long long int a,int precision,int n)
{
    double factor=1;
    double ans=a;
    for(int i=0;i<precision;i++){
       factor=factor/10;
       
       for(double j=ans;j*j<n;j=j+factor){
           ans=j;
       }
    }
    return ans;
}

using namespace std;

int main()
{
    int n=37;
    long long int a = binarysearch(n);
    cout<<"square root is "<<ans(a,3,n);
}