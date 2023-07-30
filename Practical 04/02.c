#include<stdio.h>
int main()
{
    int n1,n2;
    char operator;
    
    printf("Enter your number: ");
    scanf("%d",&n1);
    printf("Enter your number: ");
    scanf("%d",&n2);
    printf("Enter your operator: ");
    scanf(" %c",&operator);

    switch (operator)
    {
    case '+':printf("Value is: %d \n",n1+n2);
        break;
    case '-':printf("Value is: %d \n",n1-n2);
        break;    
    case '/':printf("Value is: %d \n",n1/n2);
        break;
    case '*':printf("Value is: %d \n",n1*n2);
        break; 

    default:printf("Invalid operator \n");
    }
    return 0;


}