#include<stdio.h>
int main()
{
    float Fahrenheit,Celsius;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&Fahrenheit);
    
    Celsius=(5.0/9.0)*(Fahrenheit-32);

    printf("Celsius: %f\n",Celsius);


    return 0;
}