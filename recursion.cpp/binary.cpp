#include<bits/stdc++.h>

using namespace std;

bool binary(int arr[],int s,int e,int key){
    if(s>e){
        return false;
    }

    int mid=s+(e-s)/2;
    if(arr[mid]==key){
        return true;
    }
    else if(arr[mid]<key){
         return binary(arr,mid+1,e,key);
    }
    else{
         return binary(arr,s,mid-1,key);
    }
}

int main(){
int arr[]={1,2,3,4,5};
if(binary(arr,0,3,34)){
    cout<<"present"<<endl;
}
else{
    cout<<"not present"<<endl;
}
}