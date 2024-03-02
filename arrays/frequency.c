
#include<stdio.h>
int main(){
    char s1[100];
    int i,j,len,count;
    printf("enter the string :");
    gets(s1);
    len=0;
    while(s1[len]!='\0')
    {
        len++;
    }
    for(i=0;i<len;i++)
        {
        count=1;
        if(s1[i]){
            for(j=i+1;j<len;j++)
            {   
                if
                (s1[i]==s1[j]){
                    count++;
                  s1[j]='\0';
                }
            } 
            printf("%c-%d \n",s1[i],count);
        }
    }  
   return 0;
}