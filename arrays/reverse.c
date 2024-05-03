#include<stdio.h>
int main(){
    char s1[100],*p,*q;
    int i,len,temp=0;
    printf("enter the string\n");
    scanf("%s",s1);
    len=0;
    while(s1[len]!='\0')
    {
        len++;
    }
    p=s1;
    q=s1+(len-1);
    for(i=0;i<len/2;i++)
    {
      temp=*p;
      *p=*q;
      *q=temp;
      p++;
      q--;
    }
    printf("%s",s1);
    return 0;
}