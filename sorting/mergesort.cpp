#include<bits/stdc++.h>

using namespace std;

void merge(int arr[],int lb,int mid,int ub){
    
}

void mergesort(int arr[],int lb,int ub){
    if(lb<ub){
        mid = lb+(ub-lb)/2;
        mergesort(arr,lb,mid);
        mergsort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}

int main(){

}