#include<stdio.h>
int main(){
    char s1[100],*p,*q;
    printf("emter the string");
    gets(s1);
    int i,j,l,c=0;
    l=0;
    while(s1[l]!='\0')
    {
        l++;
    }
    p=s1;
    q=s1+(l-1);
    for(i=0;i<=l/2;i++)
    {
        c=0;
        if(*(p+i)!=*q)
        {
            c=1;
            break;
        }
        q--;
    }
    if(c==1)
    {
        printf("no");
    }
    else{
        printf("yes");
    }
}