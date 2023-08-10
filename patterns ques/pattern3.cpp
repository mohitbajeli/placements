
/*
123
456
789
*/
#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{

   int count=1;
   for(int i=0;i<n;i++)
   {
      for(int j=1;j<=n;j++)
      {
        cout<<count<<"";
        count++;
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