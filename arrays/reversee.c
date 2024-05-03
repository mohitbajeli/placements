#include<stdio.h>
#include<string.h>
int main(){

 char s1[100],s2[100];
    int i=0,len1,len2,c=0;
    printf("enter the string\n");
    gets(s1);
    printf("enter the string\n");
    gets(s2);
    len1=strlen(s1);
    len2=strlen(s2);
    if(len1!=len2)
    {
    printf("not equal");
    }
    else{
        while(s1[i]!='\0')
        {
            if(s1[i]!=s2[i])
            {
              printf("not equal");
            }
            else{
            

            i++;
            }
        
    }
    printf("equal");
    
    }
    return 0;


}