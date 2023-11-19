#include<bits/stdc++.h>

using namespace std;

void pattern(){
    int start;
    for(int i=1;i<=3;i++){
        if(i%2!=0){
                start=1;
            }
            else{
                start=0;
            }
        for(int j=1;j<=3;j++){
          if(start){
            cout<<"*";
            start=1-start;
          }
          else{
            cout<<" ";
            start=1-start;
          }

        }
        cout<<endl;
    }
}

int main(){
pattern();
return 0;
}