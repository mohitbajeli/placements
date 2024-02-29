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
     i=start-1;
     while(s1[i]!='\0'&& end>=start)
     {
        substr[j]=s1[i];
        i++;
        j++;
        end--;
     }
    substr[j]='\0';
    printf("sub-string extracting from the main string: %s\n",substr);
    return 0;
}