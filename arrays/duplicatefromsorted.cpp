#include<bits/stdc++.h>

using namespace std;

vector<int> duplicate(int arr[],int n){
    int i=0;
    vector<int>ans;
    ans.push_back(arr[0]);
    for(int j=i+1;j<n;j++){
           if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            ans.push_back(arr[j]);
            i++;
           }
    }
    return ans;
}

int main(){
    int arr[6]={1,1,2,2,3,3};
     vector<int>ans = duplicate(arr,6);
    cout<<"array is "<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}