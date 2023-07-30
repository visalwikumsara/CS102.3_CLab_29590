#include<stdio.h>
int main()
{ 
    float bsalary, monsalary, bonusamount, additionalAllowance, grossmonremuneration ;
    char city;
    int yearsofservice;
     
    printf("Enter you basic salary: RS. ");
    scanf("%f",&bsalary);
    
    printf("Eneter your city(C for Colombo, any other character for other cities): ");
    scanf("%s",&city);
    
    printf("Enter the number of years of service: ");
    scanf("%d",&yearsofservice);
    
    printf("Enter your monthly salary: RS. ");
    scanf("%f",&monsalary);

    if(yearsofservice>5)
    {
        additionalAllowance= bsalary * 0.1;
    }
    if(city=='c')
    {
        additionalAllowance+=2500;
    }
    if(monsalary<=25000)
    {
        bonusamount= monsalary * 0.1;
    }
    else if(monsalary<=50000)
    {
        bonusamount= monsalary * 0.12;
    }
    else
    {
        bonusamount= monsalary * 0.15;
    }

    grossmonremuneration = bsalary + additionalAllowance + bonusamount;

    printf("Gross Monthly Remuneration: RS. %.2f \n ",grossmonremuneration);



    return 0;
}