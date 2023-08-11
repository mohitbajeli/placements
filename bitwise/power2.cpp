#include<bits/stdc++.h>

using namespace std;

bool ispower(int n)
{
    int ans=1;
    for(int i=0;i<=30;i++)
    {
        if(ans==n)
        {
            return true;
        }
        ans=ans*2;
    }
    return false;
}

int main()
{
  int n;
  cout<<"enter the number"<<endl;
  cin>>n;
  if(ispower(n))
  {
    cout<<"number is power of 2"<<endl;
  }
  else
  {
    cout<<"not in power of 2"<<endl;
  }
}