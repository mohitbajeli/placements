#include<stdio.h>
int main()
{
    char s1[100],s2[100],s3[100];
    int i,len;
    printf("enter the string ");
    gets(s1);
    len=0;
    while(s1[len]!='\0')
    {
        len++;
    }
    i=0;
    int j=0;
    int k=0;
    while(s1[i]!='\0')
    {
    if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
    {   
        s2[j]=s1[i];
        j++;
    }
    else{
        s3[k]=s1[i];
        k++;
    }
    i++;
    }
    printf("%s\n",s2);
    printf("%s",s3);
    
}