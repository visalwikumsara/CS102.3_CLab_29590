#include<stdio.h>
int main()
{
    float Fahrenheit,Celsius;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&Fahrenheit);
    
    Celsius=(Fahrenheit-32)*5/9;

     printf("Celsius: %f\n",Celsius);


    return 0;
}