



#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
   int i=1;
   while(i<=n)
   {
    int j=1;
    while(j<=(n-i+1))
    {
        cout<<j;
        j++;
    }
    

   int k=1;
   while(k<=(2*(i-1)))
   {
      cout<<"*";
      k++;
   }

   int l=1;
   int val=n-i+1;
   while(l<=(n-i+1))
   {
    cout<<val;
    val--;
    l++;
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