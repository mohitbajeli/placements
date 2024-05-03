#include<bits/stdc++.h>

using namespace std;

void pattern(int n){
    
    for(int i=1;i<=n;i++){
      for(int j=1;j<=(n-i)+1;j++){
        cout<<j;
      }

      for(int k=1;k<=(2*(i-1));k++){
        cout<<"*";
      }

      for(int l=1;l<=(n-i)+1;l++){
        cout<<n-(i+l)+2;
      }
      cout<<endl;
    }


    
}

int main(){
int n=5;
pattern(n);
return 0;
}