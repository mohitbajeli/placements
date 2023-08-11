#include<bits/stdc++.h>

using namespace std;

int setbit(int a,int b)
{
    int count=0;
  while(a!=0)
  {
    int bit=a&1;
    if(bit==1)
    {
        count++;
    }
    a=a>>1;
  }
  int val=0;
  while(b!=0)
  {
    int bit=b&1;
    if(bit==1)
    {
        val++;
    }
    b=b>>1;
  }

  return count+val;
}

int main()
{
    int a,b;
    cout<<"enter the number"<<endl;
    cin>>a>>b;
    cout<<"no of set bits are"<<setbit(a,b);

    return 0;
}