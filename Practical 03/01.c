#include<stdio.h>
int main()
{
    int n1,n2,max;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    
    if(n1>n2)
    max=n1;
    else
    max=n2;
    
    printf("Max value is %d\n",max);

    return 0;
}