#include<stdio.h>
int main(){
    char s1[100],s2[100],s3[100],*p,*q,*r;
    int i,j;
    printf("enter the string\n");
    gets(s1);
    printf("enter the string\n");
    gets(s2);
    int len=0;
    while(s1[len]!='\0')
    {
        len++;
    }
    s1[len]=' ';
    i=len+1;
    p=s1;
    q=s2;
        for(j=0;s2[j]!='\0';j++)
        {
           *(p+i)=*(q+j);
            
            i++;
        }
        s1[i]='\0';
    
    r=s3;
     for(i=0;s1[i]!='\0';i++)
     {
        *(r+i)=*(p+i);
        
        
     }
     s3[i]='\0';
    printf("%s",s3);
}