#include<bits/stdc++.h>

using namespace std;

void maxmin(int arr[],int size)
{
int max=INT_MIN;
int min=INT_MAX;

for(int i=0;i<size;i++)
{
    if(arr[i]>max)
    {
        max=arr[i];
    }

    if(arr[i]<min){
       min=arr[i];
    }
}

cout<<"maximum element is "<<max<<endl;
cout<<"min element is "<<min<<endl;
}

int main()
{
    int arr[4]={4,12,8,10};
    maxmin(arr,4);
}