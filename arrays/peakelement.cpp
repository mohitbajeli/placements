#include<bits/stdc++.h>

int peak(int arr[],int n)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return mid;
}


using namespace std;



int main()
{
int arr[]={1,2,3,4,5,3,2,1};
cout<<"peak element is "<<peak(arr,8);
return 0;
}