#include<stdio.h>
int main()
{
    int basevalue, exponentvale;
    int power = 1;

    printf("Enter base value: ");
    scanf("%d",&basevalue);
    
    printf("Enter exponent value: ");
    scanf("%d",&exponentvale);

    for (int i = 0; i < exponentvale; i++)
    {
        power *= basevalue;
    }

    printf("%dth of the %d = %d\n", exponentvale, basevalue, power);

    return 0;

}