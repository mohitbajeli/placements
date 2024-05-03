#include<stdio.h>
int main (){
    char s1[100],s2[100];
    int i,j,len;
    printf("enter the string ");
    gets(s1);
    printf("enter the string ");
    gets(s2);
    len=0;
    while(s1[len]!='\0')
    {
        len++;
    }
    i=len;
    j=0;
    while(s2[j]!='\0')
    {
        s1[i]=s2[j];
        j++;
        i++;
    }
    s1[i]='\0';
    
    printf("%s",s1);
}