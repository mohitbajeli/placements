#include<bits/stdc++.h>

using namespace std;

int bitscomplement(int n)
{
    int m=n;

    int mask=0;
    if(m==0)
    {
        return 1;
    }
    while(m!=0)
    {
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int ans = (~n)&mask;

    return ans;

}

int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"ones complement is "<<bitscomplement(n);
    return 0;
}