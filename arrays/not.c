#include<stdio.h>
int main(){
    char s1[100],s2[100];
    
    printf("enter the string :");
    gets(s1);
    int i=0;
    int len=0;
    while(s1[i]!='\0'){
        len++;
        i++;
    }
    int j=len-1;
    int count=0;
    int k=0;
    while(k<=j){
        if(s1[k]!=s1[j]){
            count=1;
            break;
        }
        k++;
        j--;
    }
    if(count){
        printf("not a palindrome");
    }
    else{
        printf("palindrome");
    }

   
}


