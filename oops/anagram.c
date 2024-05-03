#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100],*p,*q;
    int i,j,l1,l2,c=0,flag=0;
    printf("enter the string\n");
    gets(s1);
    printf("enter the string\n");
    gets(s2);
    l1=strlen(s1);
    l2=strlen(s2);
    p=s1;
    q=s2;
    if(l1==l2)
    {
        for(i=0;i<l1;i++)
        {
        c=0;
        for(j=0;j<l2;j++)
        {
            if(*(p+i)==*(p+j) && *(p+j)!='#')
            {
                *(p+j)='#';
                c=1;
                break;
            }
        }
        if(c==0)
        {
            flag=1;
        }
        }
        if(flag==1)
        {
            printf(" not anagram");
        }
        else{
            printf("yes ");
        }
    }
    else{
         printf("not");
    }

}