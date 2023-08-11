#include<bits/stdc++.h>

using namespace std;

int unsign(int n)
{
    int count=0;
    while(n!=0)
    {
        if(n&1)
        {
            count++;
        }
        n=n>>1;
    }
    return count;
}

int main()
{
    int n;
    cout<<"enter the digit"<<endl;
    cin>>n;
    cout<<"number of ones bits are "<<unsign(n);
    return 0;
}