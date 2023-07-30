#include<stdio.h>

int main() 
{
    int prices;
    int sum = 0;
    int count = 0;
    int i;
    float average;

    printf("Enter the prices of 10 items:\n");
    for (i = 0; i < 10; i++) {
        printf("Item %d: $", i + 1);
        scanf("%d", &prices);
        
        sum += prices;
        if (prices > 200) {
            count++;
        }
    }

    average = (float)sum / 10;

    printf("Average value of an item: $%.2f\n", average);
    printf("Number of items with price > $200: %d\n", count);

    return 0;
}
