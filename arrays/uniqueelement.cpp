#include<bits/stdc++.h>

using namespace std;

int uniqueelement(int arr[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
       ans=ans^arr[i];
    }
    return ans;
}
int main()
{
int arr[50]={3,3,5,5,6};

cout<<"unique element is "<<uniqueelement(arr,5);
return 0;
}