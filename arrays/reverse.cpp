#include<bits/stdc++.h>
void swap(int *a,int *b)
{
    int *temp;
    *temp=*a;
    *a=*b;
    *b=*temp;


}
void reverse(int arr[],int size)
{
    for(int i=0;i<size/2;i++)
    {
        swap(&arr[i],&arr[size-i-1]);
    }
}

using namespace std;

int main()
{
int arr[100]={4,6,1,2,8,9};
reverse(arr,6);
for(int i=0;i<6;i++)
{
    cout<<arr[i]<<" ";
}
return 0;

}