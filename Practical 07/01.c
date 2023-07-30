#include<stdio.h>
int main()
{
    int num1[3][3], num2[3][3], num3[3][3];
    int x, y;

    //num1
    for ( x = 0; x < 3; x++)
    {
        for ( y = 0; y < 3; y++)
        {
            printf("Enter the number num[%d][%d]: ",x, y);
            scanf("%d",&num1[x][y]);
        }
        
    }

    for ( x = 0; x < 3; x++)
    {
        for ( y = 0; y < 3; y++)
        {
            printf("%d ",num1[x][y]);
        }
        printf("\n");
        
    }
    printf("\n");

    //num2
    for ( x = 0; x < 3; x++)
    {
        for ( y = 0; y < 3; y++)
        {
            printf("Enter the number num[%d][%d]: ",x, y);
            scanf("%d",&num2[x][y]);
        }
        
    }

    for ( x = 0; x < 3; x++)
    {
        for ( y = 0; y < 3; y++)
        {
            printf("%d ",num2[x][y]);
        }
        printf("\n");
        
    }
    printf("\n");

    // Sum of Matrix
    for ( x = 0; x < 3; x++)
    {
        for ( y = 0; y < 3; y++)
        {
            num3[x][y] = num1[x][y] + num2[x][y];
            printf("%d  ", num3[x][y]);
        }

        printf("\n");
        
    }
    return 0;
    
}