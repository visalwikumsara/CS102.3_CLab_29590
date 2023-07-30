#include<stdio.h>
int main()
{
    int Monthno;

    printf("Enter month number: ");
    scanf("%d",&Monthno);

    switch (Monthno)
    {
        case 1:
            printf("January is 31 days\n");
        break;
        case 2:
            printf("February is 28 days\n");
        break;
        case 3:
            printf("March is 31 days\n");
        break;
        case 4:
            printf("April is 30 days\n");
        break;
        case 5:
            printf("May is 31 days\n");
        break;
        case 6:
            printf("June is 30 days\n");
        break;
        case 7:
            printf("July is 31 days\n");
        break;
        case 8:
            printf("August is 31 days\n");
        break;
        case 9:
            printf("September is 30 days\n");
        break;
        case 10:
            printf("Octomber is 31 days\n");
        break;
        case 11:
            printf("November is 30 days\n");
        break;
        case 12:
            printf("December is 31 days\n");
        break;
    
        default:
            printf("Invalid Month Number\n");
    }

}