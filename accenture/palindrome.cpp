#include<bits/stdc++.h>

using namespace std;

bool palindrome(int n){
    long long rev=0;
    int x=n;
    int index;
    while(x){
      index=x%2;
      rev=(rev*10)+index;
      x=x/2;
    }
    if(rev==n){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;

    if(palindrome(num)){
        cout<<"palindrome number";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;

}