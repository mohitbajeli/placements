#include<stdio.h>
int func(int num)
{
int i,r,sum=0;
i=num;
while(num>0)
{
r=num%10;
sum=sum+r*r*r;
num=num/10;
}
if(sum==i)
return 1;
else 
return 0;
}
void main ()
{
    int num,res;
    printf("enter the value \n");
    scanf("%d",&num);
    res=func(num);
    if(res==1)
    printf("%d is armstrong number\n",num);
    else
    printf("%d is not a armstrong number\n",num);
}
