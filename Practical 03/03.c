#include<stdio.h>
int main()
{
    char empname[20];
    float bsalary,inc,nsalary;
    
    printf("Enter employee name: ");
    scanf("%s",&empname);
    printf("Enter basic salary: RS ");
    scanf("%f",&bsalary);

    if(bsalary<5000)
    {
        inc=bsalary*0.05;
    }
    else if(bsalary<10000)
    {
        inc=bsalary*0.10;
    }
    else
    {
        inc=bsalary*0.15;
    }

    nsalary=bsalary+inc;
    
    printf("Employee name: %s\n",empname);
    printf("New salary: RS %.2f\n",nsalary);


    return 0;
}