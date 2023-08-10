/*
1
2 3
4 5 6
7 8 9 10
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{

   int count=1;
   int i=1;
   while(i<=n)
   {
    int j=1;
    while(j<=i)
    {
      cout<<count<<" ";
      count++;
      j++;
    }
    cout<<endl;
    i++;
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