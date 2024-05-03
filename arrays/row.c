#include<stdio.h>
int main(){
    int m,n,p,q,i,j,k,sum=0;
    printf("enter the order");
    scanf("%d%d",&m,&n);
     int arr[m][n];
     printf("emter the elements ");
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
     }
     printf("enter the order");
     scanf("%d%d",&p,&q);
     int num[p][q],mat[n][p];
     if(n!=p){
        printf("multiplication not done");
     }
     else{
     printf("enter the second matrix");
      for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
            scanf("%d",&num[i][j]);
        }
     }
     if(n!=p){
        printf("multiplication not done");
     }
        
         for(i=0;i<m;i++)
        {
        for(j=0;j<q;j++)
         {    
        sum=0;
        for(k=0;k<m;k++)
        {
    sum=sum+(arr[i][k]*num[k][j]);
                          
    }
    mat[i][j]=sum;
  }
     }
     printf("multiplication is \n");
        for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
        {
            printf("%d ",mat[i][j]);
            }
          printf("\n");
        }
     }
            
     return 0;
}