#include<stdio.h>

int main(){
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("%c is an alphabet letter.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a number.\n", ch);
    } else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}