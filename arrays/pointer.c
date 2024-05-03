#include<stdio.h>
int main(){
    int n,i,*p;
    printf("enter the value of n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    p=arr;
    for(i=0;i<n;i++)
    {
        if(*(p+i)>0)
        {
            arr[i]=(*(p+i)-2);
        }
        else if(*(p+i)<0){
            arr[i]=(*(p+i)+1);
        }
        else{
            continue;
        }
    }
    printf("result");
    for(i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }
    return 0;
    }