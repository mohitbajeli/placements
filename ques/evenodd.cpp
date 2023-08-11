#include<bits/stdc++.h>

using namespace std;

bool oddeven(int n)
{
    if(n&1)
    {
       return false;
    }
    return true;
}

int main()
{
    int n;
    cout<<"enter the no"<<endl;
    cin>>n;

    if(oddeven(n))
    {
        cout<<"no is even"<<endl;
    }
    else
    {
        cout<<"no os odd"<<endl;
    }

    return 0;
}