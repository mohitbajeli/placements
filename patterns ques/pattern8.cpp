/*
1
2 1
3 2 1
4 3 2 1
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
   int i=1;
   while(i<=n)
   {
    int j=1;
    int val=i;
    while(j<=i)
    {
      cout<<val<<" ";
      val--;
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