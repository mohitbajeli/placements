/*
1111
 222
  33
   4
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
   int i=1;
   while(i<=n)
   {
    int spaces = i-1;
    while(spaces)
    {
        cout<<" ";
        spaces--;
    }
    int j=1;
    while(j<=(n-i+1))
    {
        cout<<i;
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