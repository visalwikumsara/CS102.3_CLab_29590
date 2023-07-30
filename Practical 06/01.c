#include<stdio.h>
int main()
{
    int array[10];
    int sum = 0, i;
    float average;

    for ( i = 0; i <= 9; i++)
    {
        printf("Enter element %d: ",i + 1);
        scanf("%d",&array[i]);
        sum += array[i];
    }
    
    int min = array[0];
    int max = array[0];

    for ( i = 0; i <= 9; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
        if (array[i] > max)
        {
            max = array[i];
        }
        
        
    }

    average = (float)sum / 10;

    printf("Minimum value: %d\n",min);
    printf("Maximum value: %d\n",max);
    printf("Average value: %.2f",average);
    printf("\n\n");

    printf("Array in revers order\n");
    for ( i = 9; i >= 0; i--)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    

}
