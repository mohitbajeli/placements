#include<stdio.h>
int main() {
int n,i,k,g=0,l=0,e=0;
printf("enter the value of n\n");
scanf("%d",&n);
printf("enter the value of k\n");
scanf("%d",&k);
printf("enter the elements");
int num[n];
for(i=0;i<n;i++)
scanf("%d",&num[i]);
for(i=0;i<n;i++)
{
    if(num[i]>k)
    {
        g=g+1;
    }
    else if (num[i]<k)
    {
        l=l+1;
    }
    else{
        e=e+1;
    }
}
printf("numbers greater than k: %d\n",g);
printf("number  less than k: %d\n",l);
printf("number  equal to k: %d\n",e);
return 0;
}