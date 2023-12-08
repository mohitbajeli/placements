#include<bits/stdc++.h>

using namespace std;

bool linear(int arr[],int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    return linear(arr+1,size-1,key);
    
}

int main(){
int arr[]={1,2,3,4};

if(linear(arr,4,3)){
    cout<<"present"<<endl;
}
else{
    cout<<"not present "<<endl;
}
return 0;
}