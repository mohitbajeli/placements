#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    float sum=0, m,s=0,std;
    printf("enter the number ");
    scanf("%d",&n);
    float arr[n];
    float *p=arr;
    printf("enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
        sum=sum+*p;
        p++;
    }
    m=sum/n;
    p=arr;
    for(i=0;i<n;i++)
    {
     s=s+pow((*p-m),2);
     p++;

    }
    std=sqrt(s/n);
    printf("mean is %f \n",m);
    printf("standard deviation is %f \n",std);
    return 0;

}