/*
1234
1234
1234
1234
*/
#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{

   for(int i=0;i<n;i++)
   {
      for(int j=1;j<=n;j++)
      {
        cout<<j<<"";
      }
      cout<<endl;
   }
}

int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    cout<<"pattern is"<<endl;
    pattern(n);
    return 0;
}