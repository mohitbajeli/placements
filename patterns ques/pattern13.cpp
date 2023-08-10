/*
A
B B
C C C
D D D D
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
int i=1;
while(i<=n)
{
    int j=1;
    while(j<=i)
    {
        char ch='A'+i-1;
        cout<<ch<<" ";
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