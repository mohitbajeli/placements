#include <stdio.h>
#include<math.h>
int printSeriesSum(int n)
{
    int sum = 1;
    for (int i = 2; i <= n; i++) {
       sum+=i*(i-1);
    }    
    return sum;
}
int main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    int finalsum = printSeriesSum(n);
    printf("the sum of series is %d",finalsum);
}
