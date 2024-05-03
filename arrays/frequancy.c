#include<stdio.h>
int main(){
    char s1[100],*p;
    int i,j,len,count=0;
    printf("enter the string :");
    gets(s1);
    len=0;
    while(s1[len]!='\0')
    {
        len++;
    }
    p=s1;
    for(i=0;i<len;i++)
    {
        count=1;
        if(*(p+i))
        {
            for(j=i+1;j<len;j++)
            {
                if(*(p+j)==' ')
                {
                    *(p+j)='\0';
                    
                }
                if(*(p+i)==*(p+j))
                {
                    count++;
                     
                   
                  s1[j]='\0';
                }

            }
            printf("%c frequency is %d \n",s1[i],count);
        }
    }
   return 0;

}