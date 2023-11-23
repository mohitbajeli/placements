#include<stdio.h>
int main(){
    int n,i,k,j,coef;
    printf("enter the value of n \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        coef=1;
        for(j=1;j<=i;j++)
        {
            printf("%d",coef);
            printf(" ");
            coef=coef*(i-j)/j;
        }
        
        printf("\n");
    }
    return 0;
}