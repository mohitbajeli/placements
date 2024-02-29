#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    printf("enter the string\n");
    scanf("%[^\n]s",s1);
int len=0;
char *p,*q;
for(int i=0;s1[i]!='\0';i++){
    len++;
}
p=s1;
q=s1+(len-1);


int i;
char temp;

while(p<q){

    temp=*p;
    *p=*q;
    *q=temp;
    
    p++;
    q--;
}
printf("reverse string is %s",s1);
    return 0;
}