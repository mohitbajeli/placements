
/*
D
C D
B C D
A B C D
*/
#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{

   int i=1;
   while(i<=n)
   {
    int j=1;
    char ch='A'+n-i;
    while(j<=i)
    {
        cout<<ch<<" ";
        ch++;
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