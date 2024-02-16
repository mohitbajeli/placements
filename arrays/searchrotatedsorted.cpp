#include<bits/stdc++.h>

using namespace std;

int binarysearch(int arr[],int start,int end,int key){
    int s=start;
    int e=end;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            return 1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return 0;
}

int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}
int main(){
int arr[5]={7,9,1,2,3};
int target = 27;
int element = pivot(arr,5);
int ans=0;
if(arr[element]<target && target<arr[4]){
    ans=binarysearch(arr,element,4,target);
}
else{
   ans= binarysearch(arr,0,element-1,target);
}
if(ans){
    cout<<"present"<<endl;
}
else{
    cout<<"absent ";
}
}