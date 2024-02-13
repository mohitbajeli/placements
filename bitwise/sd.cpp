#include<bits/stdc++.h>

using namespace std;


int main(){
    int num[6]={2,7,3,7,3,1};
    int vis[6];
    for(int i=0;i<6;i++)
    {
        vis[i]=0;
    }

    for(int i=0;i<6;i++){
        vis[num[i]]++;
    }

    for(int i=0;i<6;i++){
        if(vis[i]==1){
            cout<<"the no with no duplicate is "<< i<<endl;
        }
    }
}