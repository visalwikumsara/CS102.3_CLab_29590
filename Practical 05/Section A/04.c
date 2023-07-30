#include<stdio.h>
int main()
{
    int n1,sum=0,i;
    int counter;
    printf("How many number to get sum: ");
    scanf("%d",&counter);


    for ( i = 0; i <= counter; i++)
    {
        printf("Enter number: ");
        scanf("%d",&n1);
        sum += n1;
    }
    
    printf("SUM = %d\n",sum);

    
    return 0;

}