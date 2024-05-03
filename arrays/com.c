#include<stdio.h>
#include<string.h>
int Compare(char x[],char y[])
{
	int i,j,m=0;
	i=strlen(x);
	j=strlen(y);
	if(i!=j)
	{
	   return 0;
            } 
    else
    {
    	while(x[m]!='\0')
        {
        	if(x[m]!=y[m]) 
	        {
	            return 0;		  		    	
	        }
	        else 
	        {
	   	        m++;
	        }
	    }
	        return 1;
	}
}
void main ()
{
    int k;
    char str[100],str1[100];
    printf("Enter the 1st string\n");
    gets(str);
    printf("Enter the 2nd string\n");
    gets(str1);
    k=Compare(str,str1);
    if(k==0)
    {
    	printf("The strings are not equal");
      }
      else
      {
       printf("The strings are equal");
       
}
}