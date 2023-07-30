#include<stdio.h>
int main()
{
    int n1,value;
    printf("Enter integer number: ");
    scanf("%d",&n1);

     value=n1%2;

    switch (value)
    {
        case 0:printf("Even number\n");
        break;
        
        default:printf("Odd number\n");
        
    }
    return 0;  

}