#include<stdio.h>
int main(){
    int n,i,n1,n2,n3;
    printf("enter the value of n \n");
    scanf("%d",&n);
    n1=0;
    n2=1;
    printf("%d %d",n1,n2);
    for(i=2;i<n;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf(" %d ",n3);
    }
    return 0;
}
