#include<bits/stdc++.h>

using namespace std;

bool frequency(int freq[],int n)
{
    for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(freq[i]==freq[j])
        {
            return true;
        }
    }
   }
   return false;
}

void occurence(int arr[],int n)
{
    int freq[n];


    for(int i=0;i<n;i++)
    {
        freq[i]=-1;
    }

   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
        {
            freq[i]++;
        }
    }
   }
       if(frequency(freq,n)){
        cout<<"unique"<<endl;
    }
    else
    {
        cout<<"not unique"<<endl;
    }
}



int main()
{
    int arr[50]={-3,0,1,-3,1,1,1,-3,10,0};

    occurence(arr,10);
    return 0;
}