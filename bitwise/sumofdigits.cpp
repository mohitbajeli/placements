#include<bits/stdc++.h>

using namespace std;

int sumofdig(int n)
{
    int sum=0;
    int prod=1;

    while(n!=0)
    {
       int val=n%10;
       sum=sum+val;
       prod=prod*val;
       n=n/10;
    }
    return prod-sum;
}

int main()
{
int n;
cout<<"enter the digit"<<endl;
cin>>n;
cout<<"the result of sum and product is "<<sumofdig(n);
return 0;
}
