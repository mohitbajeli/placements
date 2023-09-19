#include<stdio.h>

int main(){
    int bp;
    float gross;
    float hra,ba,ta;
    printf("enter the basic pay\n");
    scanf("%d",&bp);
    
    hra = 0.1*bp;
    ba = 0.05*bp;
    ta = 0.15*bp;
    
    gross=bp+hra+ba+ta;

    printf("total gross salary is %f",gross);

    return 0;

}