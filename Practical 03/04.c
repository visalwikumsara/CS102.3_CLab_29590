#include<stdio.h>
int main()
{
    float Radius,Diameter,Circumference,Area;

    printf("Enter the radius value: ");
    scanf("%f",&Radius);


    printf("Enter Area Value= %.2f\n",3.14159*(Radius*Radius));
    printf("Enter Diameter Value= %.2f\n",Radius*2);
    printf("Enter Circumference Value= %.2f\n",2*3.14159*Radius);
    printf("Enter volumesphere Value= %.2f\n",4.0/3.0*3.14159*(Radius*Radius));


    return 0;
}