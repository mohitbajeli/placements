#include<stdio.h>
int comp(char s1[],char s2[])
{
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        i++;
    }
    while(s2[j]!='\0')
    {
        j++;
    }
    if(i==j)
    {
        while(s1[i]!='\0')
        {
            if(s1[i]!=s2[j])
            {
             return 0;
             i++;
        }
        }
    }
    else{
        return 0;
    }
    return 1;
}
int main(){
    char s1[100],s2[100];
     printf("enter the first string \n");
    scanf("%s",s1);
     printf("enter the second string \n");
    scanf("%s",s2);

    int element=comp(s1,s2);

    if(element){
        printf("strings are same");
    }
    else{
        printf("not same");
    }

}
