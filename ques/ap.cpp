#include<bits/stdc++.h>

using namespace std;
int ap(int n)
{
    int a= (3*n)+1;

    return a;
}
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    cout<<"n term in ap is "<<ap(n);
    return 0;
}