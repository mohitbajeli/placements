// input string = "aabbc"
//output ={a,2,b,2,c}
//or a string "a2b2c"

#include<bits/stdc++.h>

using namespace std;

int compress(vector<char>&chars){
    int i=0;
    int ansindex=0;
    int n=chars.size();

    while(i<n){
        int j=i+1;
        if(j<n && chars[i]==chars[j]){
           j++;
        }

        chars[ansindex++]=chars[i];

        int count = j-i;

        if(count>1){
            string cnt = to_string(count);
            for(char ch:cnt){
                chars[ansindex++] = ch;
            }
        }
        i=j;
    }
    for(int i=0;i<n;i++){
        cout<<chars[i]<<" ";
    }
    return ansindex;
}

int main(){
vector<char>ans={'a','a','b','b'};
cout<<"the size is "<<compress(ans);
}