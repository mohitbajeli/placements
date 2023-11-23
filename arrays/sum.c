#include <stdio.h>
int main(){
    int n,i,sum=0,Sum=0,c=0,C=0;
    printf("enter the value of n \n");
    scanf("%d",&n);
    printf("enter the elements \n");
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        if (num[i]%2==0)
        {
        sum=sum+num[i];
        c++;
        }
        else
        {
        Sum=Sum+num[i];
        C++;
        }
        
    }
    printf("even numbers are %d\n",c);
    printf("sum of even no is %d\n",sum);
    printf("odd numbers are %d\n",C);
    printf("Sum of odd no is %d\n",Sum);
    return 0;
}
