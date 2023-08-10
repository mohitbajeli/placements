#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0)
    {
      int val=n%10;
      if(val==1)
      {
        ans+=pow(2,i);
      }
        n=n/10;
        i++;
    }

    cout<<ans;
}