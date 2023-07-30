#include<stdio.h>
int main()
{
    int num,fac=1,i;
    printf("Enter number: ");
    scanf("%d",&num);

    if (num<=0)
    {
        printf("Error! Factorial");
    }
    else {
        for(int i=1;i<=num; i++){
            fac*=i;

        }
    }
    printf("Factorial %d=%d",num,fac);
    
    return 0;
}