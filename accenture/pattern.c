#include<stdio.h>
int main (){
    int n,A=97,i,j;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",A);
            A=A+1;
        }
        printf("\n");
        A=A+1;
    }
    return 0;
}
