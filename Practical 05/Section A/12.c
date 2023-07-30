#include<stdio.h>
int main()
{
    int number;

    printf("Enter integer number: ");
    scanf("%d",&number);

    printf("Factor of %d are: ",number);

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            printf("%d ,",i);
        }
        
    }
    
    printf("\n");

    return 0;
}