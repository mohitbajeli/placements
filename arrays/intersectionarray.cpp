#include<bits/stdc++.h>

using namespace std;

vector<int>intersection(vector<int>arr1,vector<int>arr2){
   vector<int>ans;
   int m=arr1.size();
   int n=arr2.size();
   int i=0;
   int j=0;
   while(i<m && j<n){
    if(arr1[i]==arr2[j]){
        ans.push_back(arr1[i]);
        i++;
        j++;
    }
    else if(arr1[i]<arr2[j]){
        i++;
    }
    else{
        j++;
    }
   }
   return ans;
   
}

int main(){
    vector<int>arr1={1,2,2,2,3,4};
    vector<int>arr2={2,2,3,3};
    vector<int>ans=intersection(arr1,arr2);
    cout<<"intersection of array is "<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}