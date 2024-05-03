#include<stdio.h>
int main(){
    char s1[100];
    int i,len,c=1;
    printf("enter the string\n");
    gets(s1);
    len=0;
    while(s1[len]!='\0')
    {
        len++;
    }
    i=0;
    while(i<len)
    {
        if(s1[i]==' '&& s1[i+1]!=' ')
        {
            c++;
        }

        i++;
    }
    printf("%d",c);
}