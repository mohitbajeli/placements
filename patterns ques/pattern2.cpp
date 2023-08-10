/*
4321
4321
4321
4321
*/

#include<bits/stdc++.h>

using namespace std;

void pattern(int n)
{
    int i=1;
    while(i<=n)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<n-j+1<<"";
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