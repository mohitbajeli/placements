#include<bits/stdc++.h>
using namespace std;

void movingzeroes(vector<int>&ans){
    int i=0;

    for(int j=0;j<ans.size();j++){
        if(ans[j]==0){
            i=j;
            break;
        }
    }
    for(int j=i+1;j<ans.size();j++){
        if(ans[j]!=0){
            swap(ans[i],ans[j]);
            i++;
        }
    }
}


int main(){
vector<int>a={0,1,0,3,12};

movingzeroes(a);
cout<<"updated array is "<<endl;
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}
}