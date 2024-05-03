#include<stdio.h>
int main(){
    char s1[100],substr[100];
    int start,end;
    printf("enter the string\n");
    scanf("%[^\n]s",s1);
    printf("enter starting position: ");
    scanf("%d",&start);
    printf("enter ending position: ");
    scanf("%d",&end);
    int i,j;
    
    j=0;
     for(i=start;i<=end;i++)
     {
        substr[j]=s1[i];
        
        j++;
        
     }
    substr[j]='\0';
    printf("sub-string extracting from the main string: %s\n",substr);
    return 0;
}