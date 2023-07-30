#include<stdio.h>
int main()
{
    int n1,value;
    printf("Enter integer number: ");
    scanf("%d",&n1);

    value=n1%2;

    if(value==0)
    {
        printf("%d is even number\n",n1);
    }
    else
    {
        printf("%d is odd number\n",n1);
    }

     

}