#include<stdio.h>
#include<string.h>
int main(){
char s1[100][100],s2[100];
int n, i,j,c=0;
printf("enter the number of student\n ");
scanf("%d",&n);
printf("enter the names of students ");
for(i=0;i<n;i++)
{
    scanf("%s",s1[i]);
}
printf("enter the name to search\n");
scanf("%s",s2);
for(i=0;i<n;i++)
{
    if(strcmp(s1[i],s2)==0)
    {
       printf("%s found at position %d",s1[i],i+1);
        c=1;
        break;
    }
}
if(c==0)
{
    printf("name not found");
}
return 0;
}