#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    int mask=0;
    int m=n;
    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
  int ans = mask&(~n);
  cout<<ans;
}