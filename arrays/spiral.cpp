#include<bits/stdc++.h>

using namespace std;

vector<int>spiralorder(vector<vector<int>>& matrix){
    
    vector<int>ans;

    int rows = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = rows*col;

    //index initialisation
    int startingrow=0;
    int startingcol=0;
    int endingrow=rows-1;
    int endingcol=col-1;

    while(count<total){
      //print starting row

      for(int index=startingcol;count<total && index<=endingcol;index++){
        ans.push_back(matrix[startingrow][index]);
        count++;
      }
      startingrow++;

      //printing endingcol
      for(int index=startingrow;count<total && index<=endingrow;index++){
        ans.push_back(matrix[index][endingcol]);
        count++;
      }
      endingcol--;

      //printing endingrow
      for(int index=endingcol;count<total && index>=startingcol;index--){
        ans.push_back(matrix[endingrow][index]);
        count++;
      }
      endingrow--;

      //print starting col
      for(int index=endingrow;count<total && index>=startingrow;index--){
        ans.push_back(matrix[index][startingcol]);
        count++;
      }
      startingcol++;
    }
return ans;
}

int main(){
vector<vector<int>>arr={{1,2,3},{4,5,6},{7,8,9}};

vector<int>sol=spiralorder(arr);
for(int i=0;i<sol.size();i++){
    cout<<sol[i]<<" ";
}
}