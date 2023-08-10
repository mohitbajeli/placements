#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"enter the digit"<<endl;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0)
    {
        int dig=n%10;
        ans = (dig*pow(10,i))+ans;
        n=n/10;
        i++;
    }

    cout<<"no is"<<ans;
    return 0;
}