#include<stdio.h>
int comp(char s1[],char s2[])
{
    int i=0,j=0,m=0;
    while(s1[i]!='\0')
    {
        i++;
    }
    while(s2[j]!='\0')
    {
        j++;
    }
    int count=0;
    if(i==j)
    {
        while(s1[m]!='\0')
        {
            if(s1[m]!=s2[m])
            {
             count=1;
             break;
             
        }
        m++;
        }
    if(count)
    {
        return 0;
    }
    else{
        return 1;
    }
    }
    else{
    return 0;
}
}
int main(){
    char s1[100],s2[100];
    int k;
     printf("enter the first string \n");
    scanf("%s",s1);
     printf("enter the second string \n");
    scanf("%s",s2);

    k=comp(s1,s2);

    if(k==1){
        printf("strings are same");
    }
    else{
        printf("not same");
    }

}
