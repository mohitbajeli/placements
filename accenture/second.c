#include<stdio.h>

int main(){
    int year;
    printf("enter the year\n");
    scanf("%d",&year);

    if(year%4==0){
        printf("leap year");
    }
    else if(year%400==0){
     printf("leap year");
    }
    else if(year%100){
        printf("not a leap year");
    }

    return 0;
}