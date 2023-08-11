// code to convert decimal to binary it is right

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"enter the decimal no"<<endl;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0)
    {
        int bit = n & 1;
        ans=(bit * pow(10,i))+ans;
        n=n >> 1;
        i++; 
    }

    cout<<"binary number is "<<ans;
    return 0;
}