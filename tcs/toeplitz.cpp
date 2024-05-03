#include<bits/stdc++.h>

using namespace std;

bool toeplitz(vector<vector<int>>ep){
    for(int i=0;i<ep.size()-1;i++){
        for(int j=0;j<ep[0].size()-1;j++){
            if(ep[i][j]!=ep[i+1][j+1]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    vector<vector<int>>top;

    cout<<"enter the elements"<<endl;

    for(int i=0;i<3;i++){
        vector<int>temp;
        for(int j=0;j<4;j++){
            int a;
            cin>>a;
            temp.push_back(a);
        }
        top.push_back(temp);
    }

    bool ans = toeplitz(top);

    if(ans){
        cout<<"it is a toeplitz matrix"<<endl;
    }
    else{
        cout<<"it is not a toeplitz matrix"<<endl;
    }


}