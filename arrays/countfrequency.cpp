#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={1,1,2,3,3,4,5};
    
    vector<bool>visited(7,false);
    for(int i=0;i<7;i++){
        if(visited[i]==true){
            continue;
        }
        int count=1;
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                visited[j]=true;
                count++;
            }
        }
        cout<<arr[i]<<" "<<count<<endl;
    }
}