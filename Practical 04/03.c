#include<stdio.h>
int main()
{
    float Radius,Circumference,Area,volumesphere;
    char desire;

    printf("Enter the radius value: ");
    scanf("%f",&Radius);

    printf("Enter the desired(Ex:C for Circumference,A for Area,V for volume of a sphere): ");
    scanf("%s",&desire);

    switch (desire)
    {
        case 'C':
        case 'c':printf("Enter Circumference Value= %.2f\n",2*3.14159*Radius);
            break;
        case 'A':
        case 'a':printf("Enter Area Value= %.2f\n",3.14159*(Radius*Radius));
            break; 
        case 'V':
        case 'v':printf("Enter volume of a sphere Value= %.2f\n",4.0/3.0*3.14159*(Radius*Radius));
            break; 
    
        default:printf("Invalid desire/n");
    }


    return 0;
}