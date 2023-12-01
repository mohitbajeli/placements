#include<bits/stdc++.h>

using namespace std;

void waveprint(int arr[][2],int nrows,int mcols){

for(int col=0;col<mcols;col++){
    if(col&1){
        for(int rows=nrows-1;rows>=0;rows--){
            cout<<arr[rows][col]<<" ";
        }
    }
    else{
        for(int rows=0;rows<nrows;rows++){
            cout<<arr[rows][col]<<" ";
        }
    }
}

}

int main(){
int arr[2][2]={{1,2},{3,4}};
waveprint(arr,2,2);
return 0;
}