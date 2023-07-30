#include<stdio.h>
int main() 
{
    int array[10];
    int count = 0;
    
    printf("Enter 10 integers:\n");
    
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &array[i]);
        
        if (array[i] % 2 == 0) 
        {
            count++;
        }
    }
    
    printf("The count of even numbers is: %d\n", count);
    
    return 0;
}
