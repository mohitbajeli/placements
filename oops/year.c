#include <stdio.h>
#include<math.h>
int main() {
int sec,hr,min,s;
printf("enter the time in sec\n");
scanf("%d",&sec);
hr=sec/3600;
min=(sec-(3600*hr))/60;
s=(sec-(3600*hr)-(min*60));
printf("time in hour:min:s is %d:%d:%d\n",hr,min,s);
	
	return 0;
}