#include<bits/stdc++.h>

using namespace std;

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}

int main(){
    int arr[]={1,0,2,3,4,5,0,0,0};
   
   int j;
    for(int i=0;i<9;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    for(int k=j+1;k<9;k++){
        if(arr[k]!=0){
            swap(arr[k],arr[j]);
            j++;
        }
    }
    cout<<"array is "<<endl;
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}