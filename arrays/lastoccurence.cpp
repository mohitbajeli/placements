#include<bits/stdc++.h>

using namespace std;

int lastoccurence(int arr[],int n,int key)
{
    int low=0;
    int high = n-1;
    int mid= low+(high-low)/2;
    int ans=0;
    while(low<=high)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            low = mid+1;
        }

        else if(arr[mid]>key)
        {
            high = mid-1;
        }

        else if(arr[mid]<key){
            low = mid+1;
        }
        mid=(low+high)/2;

    }
    if(ans!=0)
    {
        return ans;
    }
    else{
        return -1;
    }
}

int main(){
int arr[]={1,3,4,4,4,5,6};
cout<<"last occurence is "<<lastoccurence(arr,7,4);

return 0;
}