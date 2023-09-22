#include<bits/stdc++.h>

using namespace std;

void reverse(vector<int>&ans,int m){
    int s=m+1;
    int e=ans.size()-1;

    while(s<e){
        swap(ans[s],ans[e]);
        s++;
        e--;
    }
}

int main(){
    vector<int>arr={10,9,8,7,6};

    reverse(arr,2);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}