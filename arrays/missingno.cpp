#include<bits/stdc++.h>

using namespace std;

int missing(int arr[],int n)
{
    int ans=0;

    for(int i=0;i<n-1;i++)
    {
        ans=ans^arr[i];
    }

    for(int i=1;i<=n;i++)
    {
        ans=ans^i;
    }

    return ans;
}

int main()
{
int arr[]={1,2,4,5};

cout<<"the missing no is "<<missing(arr,5);
}