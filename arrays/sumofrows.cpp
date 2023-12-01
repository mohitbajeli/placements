#include<bits/stdc++.h>

using namespace std;

void sumcolumn(int arr[][3],int m,int n){
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[j][i];
        }
        cout<<"sum of "<<i+1<<" column is "<<sum<<endl;
    }
}
void sumrow(int arr[][3],int m,int n){
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
        cout<<"sum of "<<i+1<<" row is "<<sum<<endl;
    }

}


int main(){
    int arr[3][3]={{3,4,11},{2,12,1},{7,8,7}};

    sumrow(arr,3,3);
    cout<<endl;
    sumcolumn(arr,3,3);
    return 0;
}