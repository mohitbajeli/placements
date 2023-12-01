#include<stdio.h>
int main(){
    int i,j,n,temp;
    printf("enter the value of n \n");
    scanf("%d",&n);
    printf("enter the element \n");
    int num[n];
    for(i=0;i<n;i++)
    scanf("%d",&num[i]);
    for(i=1;i<n;i++)
    {
        temp=num[i];
        j=i-1;
    while(j>=0&&num[j]>temp)
    {
    num[j+1]=num[j];
    j--;
    }
    num[j+1]=temp;
    }
    printf("sorted araay is \n");
    for(i=0;i<n;i++)
    printf("%d\t",num[i]);
    return 0;
}

