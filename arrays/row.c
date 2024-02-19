#include<stdio.h>
int main(){
    int n,m,i,j,sum=0;
    printf("enter the value of m,n\n");
    scanf("%d%d",&m,&n);
    int num[m][n];
    printf("enter the elements\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&num[i][j]);
        
        }
    }
    printf("matrix \n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",num[i][j]);
        }
        printf("\n");
    }
    
     for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
        sum=sum+num[j][i];
        }
        printf("\nsum of all the element in  coloumn %d is %d\n",i,sum);
    }
    return 0;

}