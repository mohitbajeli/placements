#include<stdio.h>
int main (){
    int i,j,n,swap;
printf("enter the value of n \n");
scanf("%d",&n);
printf("enter the elements \n");
int num[n];
for(i=0;i<n;i++)
scanf("%d",&num[i]);
for(i=0;i<n-1;i++)
{
    for(j=0;j<n-1;j++)
    {
        if(num[j]>num[j+1])
        {
            swap=num[j];
            num[j]=num[j+1];
            num[j+1]=swap;
        }
    }
}
printf("sorted araay ");
for(i=0;i<n;i++)
printf("%d\t",num[i]);
return 0;
}









