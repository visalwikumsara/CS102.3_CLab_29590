#include<stdio.h>
int main()
{
    int number, sum;

    printf("Enter numbers(enter last number -1): \n");

    while (1)
    {
        scanf("%d",&number);

        if (number == -1)
        {
            break;
        }
        sum += number;
        
    }
    printf("The sum is %d\n",sum);
    

    return 0;
}