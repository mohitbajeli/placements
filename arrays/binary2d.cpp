#include<bits/stdc++.h>

using namespace std;

bool binarysearch(int arr[][3],int n,int m,int key){
    int s=0;
    int e=n*m-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        int element = arr[mid/m][mid%m];
        if(element==key){
            return true;
        }
        else if(element<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return false;
}

int main(){
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
if(binarysearch(arr,3,3,6)){
    cout<<"present";

}
else{
    cout<<"absent";
}
}