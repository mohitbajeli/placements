#include<bits/stdc++.h>

using namespace std;

vector<int>ans(vector<int>nums1,int m,vector<int>nums2,int n){
         
    if(nums2.size()==0){
      return nums1;
    }
    int i=0;
     for(int j=0;j<m;j++){
        if(nums1[j]==0){
                i=j;
                break;
        }
        }
        for(int j=0;j<n;j++){
            nums1[i]=nums2[j];
            i++;
        }

        return nums1;
}

int main(){
    vector<int>nums1={1,2,3,0,0,0};
    vector<int>nums2={2,5,6};
    vector<int>a=ans(nums1,6,nums2,3);
    sort(a.begin(),a.end());
    cout<<"mergesorted array is "<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

    return 0;

}