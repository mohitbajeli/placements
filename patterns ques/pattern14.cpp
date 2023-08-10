/*
A 
B C
D E F
G H I J 
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
        char ch = 'A'+val-1;
       cout<<ch<<" ";
       j++;
       val++;
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