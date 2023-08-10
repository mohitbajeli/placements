/*
   *
  **
 ***
****
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int i=1;
    
    while(i<=n)
    {
        int spaces=n-i;
        
        while(spaces)
        {
            cout<<" ";
            spaces--;
        }
        int j=1;
        while(j<=i)
        {
            cout<<"*";
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