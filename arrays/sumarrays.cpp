#include<bits/stdc++.h>

using namespace std;

int sumarray(vector<int>nums1,vector<int>nums2){
    int res1=0;
    int res2 =0;

    for(int i=0;i<nums1.size();i++){
        res1=(res1*10)+nums1[i];
    }
    for(int i=0;i<nums2.size();i++){
        res2=(res2*10)+nums2[i];
    }

    return res1+res2;
}

int main(){
    vector<int>nums1={1,2,3};
    vector<int>nums2={9,9};
     
     cout<<"sum of array is "<<sumarray(nums1,nums2);
     return 0;
}