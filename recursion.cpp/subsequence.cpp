#include<bits/stdc++.h>

using namespace std;

void solve(string nums,vector<string>&ans,string output,int index){

    if(index>=nums.size()){
        
        ans.push_back(output);
        return ;
    }

    solve(nums,ans,output,index+1);

    char element = nums[index];
    output.push_back(element);

    solve(nums,ans,output,index+1);
}

int main(){
    string nums="abc";
    vector<string>ans;
    string output;
    int index=0;
    solve(nums,ans,output,index);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }

}