#include<stdio.h>
int main(){
    int n,max=0,smax=0,i;
    printf("enter the no of element \n");
    scanf("%d",&n);

    printf("enter the elements ");
   int  num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    
        for(i=0;i<n;i++)
        {
        
            if(num[i]>max)
            {
                smax=max;
                max=num[i];

            }
            else if(num[i]>smax&&num[i]!=max)
            smax=num[i];
                    
    }
    printf("maximum element is %d \n",max);
    printf("second maximum element is %d \n",smax);
    return 0;
}