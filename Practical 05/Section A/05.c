#include <stdio.h>

int main() 
{
    int number, reversedNumber = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    do {
        remainder = number % 10;  
        reversedNumber = reversedNumber * 10 + remainder;  
        number /= 10;  
    } while (number != 0);

    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}
