#include<bits/stdc++.h>

using namespace std;



int main(){
int arr[]={1,2,3,4,5};
int a[5];
for(int i=0;i<5;i++){
    int temp=0;
    for(int j=0;j<=i;j++){
        temp+=arr[j];
    }
     a[i]=temp;
  }

  for(int i=0;i<5;i++){
    cout<<a[i]<<" ";
  }
}