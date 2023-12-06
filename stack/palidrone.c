#include<stdio.h>

int main(){
    int n;
    printf("enter array size \n");
    scanf("%d",&n);
     
     int arr[n];
    printf("enter elements \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int min = 99999999;

    for(int i=0;i<n;i++){
        if(arr[i]<min){
             min =arr[i];
        }
    }

    printf("minimum element is %d",min);

}