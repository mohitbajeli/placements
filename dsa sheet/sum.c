#include<stdio.h>
int main(){
 int m,n,i,j,temp;
 printf("enter the order ");
 scanf("%d%d",&m,&n);
 int arr[m][n];
 printf("enter the element ");
 for(i=0;i<m;i++)
 {
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[i][j]);
    }
 }
 
 for(j=0;j<n;j++)
 {
    
    temp=arr[j][0];
    arr[j][0]=arr[j][1];
    arr[j][1]=temp;
 }
 for(i=0;i<m;i++)
 {
    for(j=0;j<n;j++)
    {
        printf("%d",arr[i][j]);
    }
    printf("\n");
 }
 return 0;

}