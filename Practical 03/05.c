#include<stdio.h>
int main()
{
    int n1,n2,value;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    value=n1%n2;

    if(value==0)
    printf("Of the first is a multiple of the second: %d\n",value);
    else
    printf("Of the first is a not multiple of the second: %d\n",value);

    return 0;
} 