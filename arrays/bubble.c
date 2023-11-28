#include<stdio.h>
int main(){
    int i,j,n,swap;
    printf("enter the value of n \n");
    scanf("%d",&n);
    int num[n];
    printf("enter the element \n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&num[i]);
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(num[j]>num[j+1])
            {
            swap=num[j];
            num[j]=num[j+1];
            num[j+i]=swap;
        }
    }
    }
    printf("sorted element \n");
    for(i=0;i<n;i++)
    {
    printf("%d",num[i]);
    }
    
    return 0;
}