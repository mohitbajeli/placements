#include<stdio.h>


    struct employee
    {
    char  name[100];
    int   empcode;
    int   date;
    char  month[60];
    int   year;
    float salary;
    };
     void empdetails(struct employee emp){
       printf("\t\t\tABCCorporation\n");
       printf("Name \t\t:%s\n",emp.name);
       printf("EmpCode\t\t:%d\n",emp.empcode);
       printf("DOB\t\t:%d-%s-%d\n",emp.date,emp.month,emp.year);
       printf("Neet.salary\t:Rs%0.2f\n",emp.salary);
    }
    int main(){
        struct employee emp;
       printf("Name: ");
       gets(emp.name);
       printf("EmpCode: ");
       scanf("%d",&emp.empcode);
       printf("DOB: ");
       scanf("%d %s %d",&emp.date,emp.month,&emp.year);
       printf("Neet.salary: ");
       scanf("%f",&emp.salary);
       empdetails(emp);
    }
       

