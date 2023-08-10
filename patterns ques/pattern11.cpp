/*
A B C D
E F G H
I J K L
M N O P
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
   int i=1;
   int val=1;
   while(i<=n)
   {
    int j=1;
    while(j<=n)
    {
        char ch='A'+val-1;
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