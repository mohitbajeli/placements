#include<bits/stdc++.h>

using namespace std;

int sum(int arr[],int size){
    int val=0;
    for(int i=0;i<size;i++)
    {
        val=val+arr[i];
    }
  return val;
}

int main()
{
int arr[50]={2,7,1,-4,11};
cout<<"the sum of array is "<<sum(arr,5);
return 0;
}