#include<bits/stdc++.h>

using namespace std;

int binary(int arr[],int n,int key)
{
    
    int low = 0;
    int high = n-1;
       int mid =low+ (high-low)/2;  //if we do (low+high)/2 then at one time it will go greater than 2pow31-1.
    while(low<=high)
    {
    

       if(arr[mid]==key)
       {
        return mid;
        break;
       }
       else if(arr[mid]<key)
       {
        low=mid+1;
       }
       else if(arr[mid]>key)
       {
        high = mid-1; 
       }
        mid =low+ (high-low)/2;
    }
    return -1;
}



int main()
{
int arr[]={3,5,9,13,27};

cout<<"key is at the position "<<binary(arr,5,13)+1;
}