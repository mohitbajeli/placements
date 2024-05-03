#include<stdio.h>
int main(){
  char s1[100],s2[100];
  int i,j,start,end,l;
   printf("enter the string\n");
   gets(s1);
   l=0;
   printf("starting point\n");
   scanf("%d",&start);
   printf("ending point \n");
   scanf("%d",&end);
   while(s1[l]!='\0')
   {
    l++;
   }
   j=0;
   for(i=0;i<l;i++)
   {
    if(i==start && start<=end )
    {
      s1[i]='\0';
      start++;
    }
    else{
      s2[j]=s1[i];
      j++;
    }
    
   }
   s2[j]='\0';
   printf("%s",s2);
   return 0;

}