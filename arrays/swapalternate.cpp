#include<bits/stdc++.h>

using namespace std;

void alternate(int arr[],int size){
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size){
        swap(arr[i],arr[i+1]);
    }
    }
}

int main()
{
int arr[100]={1,2,7,8,5};

alternate(arr,5);
for(int i=0;i<5;i++){
cout<<arr[i]<<" ";
}



}