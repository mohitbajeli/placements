#include<stdio.h>
int main(){
    char s1[100];
    int i,len;
    printf("enter the string\n");
    gets(s1);
    for(len=0;s1[len]!='\0';len++)
    {

    }
    s1[0]=s1[0]-32;
    for(i=0;i<len;i++)
    {
        if(s1[i]==' '&& s1[i+1]>='a'&& s1[i+1]<='z')
        {
            s1[i+1]=s1[i+1]-32;
        }
        if(s1[i+1]==' ' && s1[i]>='a'&& s1[i]<='z'){
            s1[i]=s1[i]-32;
        }
        if(s1[i+1]=='\0'){
            s1[i]=s1[i]-32;
        }
    }
    printf("%s",s1);
    return 0;
}