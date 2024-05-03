#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100];
    int i=0,l1,l2,c=0;
    printf("enter the string\n");
    gets(s1);
    printf("enter the string\n");
    gets(s2);
    l1=strlen(s1);
    l2=strlen(s2);
    int count=0;
    if(l1==l2)
    {
    
        while(s1[i]!='\0')
        {
            if(s1[i]!=s2[i]){
            count=1;
              break;
            }
            i++;
        }
        if(count){
            printf("not equal");
        }   
        else{
            printf("equal");
        }
        
    }
    else{
        printf("not equal");
    }

    
}