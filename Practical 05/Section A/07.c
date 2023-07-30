#include <stdio.h>

int main() 
{
    int num1 = 0, num2 = 1, nextNum, count;

    printf("Fibonacci Sequence: ");

    for (count = 0; count < 10; count++) {
        if (count <= 1)
            nextNum = count;
        else {
            nextNum = num1 + num2;
            num1 = num2;
            num2 = nextNum;
        }
        printf("%d ", nextNum);
    }

    return 0;
}
