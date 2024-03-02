#include<stdio.h>
int main(){
    char s1[100],s2[100];
    
    printf("enter the string :");
    gets(s1);
    
    int len=0;
    while(s1[len]!='\0'){
        len++;
    }
    int j=len-1;
    int count=0;
    int i=0;
    while(i<=j){
        if(s1[i]!=s1[j]){
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


