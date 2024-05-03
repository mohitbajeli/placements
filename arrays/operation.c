#include<stdio.h>
void operation(float m,float n,float *p,float *q)
{
 *p=m+n;
 *q=m-n;
}

int main()
{
    float m,n,p,q;
    printf("enter the value ");
    scanf("%f%f",&m,&n);
    operation(m,n,&p,&q);
    printf("addition is %0.2f\n",p);
    printf("subtraction is %0.2f",q);
    return 0;
}