#include<bits/stdc++.h>

using namespace std;

void merge(int arr[],int lb,int mid,int ub){
    
    int k=lb;
    int b[50];
    int i=lb;
    int j=mid+1;
    while(i<=mid && j<=ub){
        if(arr[i]<=arr[j]){
            b[k]=arr[i];
            i++;
            k++;
        }
        else{
            b[k]=arr[j];
            k++;
            j++;
        }
    }
    
        while(j<=ub){
            b[k]=arr[j];
            k++;
            j++;
        }
    
    
        while(i<=mid){
            b[k]=arr[i];
            k++;
            i++;
        }


    for(int i=lb;i<k;i++){
        arr[i]=b[i];
    }

}
void mergesort(int arr[],int lb,int ub){
    if(lb<ub){
       int mid = lb+(ub-lb)/2;
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}

int main(){
int arr[]={15,5,24,8,1,3,16,10,20};


mergesort(arr,0,8);

cout<<"sorted array is "<<endl;

for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
}
}