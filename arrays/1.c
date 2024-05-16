#include<stdio.h>
#include<stdlib.h>
int x;
int main(int argc, char *argv[])
{
FILE *fp =fopen("Numbers.txt", "w+");
FILE *fp1=fopen("odd.txt","w+");
FILE *fp2=fopen("even.txt", "w+");
if( fp!=NULL && fp1!=NULL && fp2!=NULL)
{ int i;
  for(i=1;i<argc;i++)
 {
    x=atoi(argv[i]);
    fputc(x,fp);
     if (x%2==0) 
        fputc(x,fp1);
    else 
        fputc(x,fp2);
  }
}
else 
 printf("Error creating file");
rewind(fp);
rewind(fp1);
rewind(fp2);
printf("\nFile Numbers.txt\n");
while((x=fgetc(fp))!=EOF)
{   
    printf("%d",x);
 }
printf("\nFile: even.txt\n");
while((x=fgetc(fp1))!=EOF)
{
  printf("%d",x);
 }
 printf("\nFile: odd.txt\n");
 while((x=fgetc(fp2))!=EOF)
{
   printf("%d",x);
}
fclose(fp);
fclose(fp1);
fclose(fp2);
return 0;
}