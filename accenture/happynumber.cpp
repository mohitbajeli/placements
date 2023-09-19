#include<bits/stdc++.h>

using namespace std;

bool ishappy(int n){
    set<int>myset;
    int val;
    int index=0;

    while(1){
        val=0;
        while(n){
            index=n%10;
            val+=index*index;
            n=n/10;
        }
        if(val==1){
            return true;
        }
        else if(myset.find(val)!=myset.end()){
            return false;
        }
        myset.insert(val);
        n=val;
    }
    return false;
}

int main(){
int n=82;
if(ishappy(n)){
    cout<<"happy number";
}
else{
    cout<<"not happy";
}
return 0;
}