#include<bits/stdc++.h>

using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int i=0;
        int j=0;
         
        vector <int> c;
         
        while(i<n && j<m){
            if(a[i]<=b[j]){
                if(c.size()==0 || c.back()!=a[i]){
                    c.push_back(a[i]);
                }
                i++;
            }
            else{
                if(c.size()==0 || c.back()!=b[j]){
                    c.push_back(b[j]);
                }
                j++;
            }
        }
        
        while(i<n){
            if(c.size()==0 || c.back()!=a[i]){
                c.push_back(a[i]);
            }
                i++;
        }
        
        while(j<m){
            if(c.size()==0 || c.back()!=b[j]){
                c.push_back(b[j]);
            }
            j++;
        }
        return c.size();
    }

int main(){
int a[]={1,1,2,3,4,5,6};
int b[]={1,2,3,4,6,7};
int size = doUnion(a,7,b,6);
cout<<"size is "<<size;

}