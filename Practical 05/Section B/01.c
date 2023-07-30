#include<stdio.h>
int main()
{
    int positive=0,negative=0,zero=0,counter=1,num;
    while (counter<=10)
    {
        printf("Enter value %d: ",counter);
        scanf("%d",&num);
        if (num>0)
        {
            positive=positive+1;
        }
        else if (num<0)
        {
            negative=negative+1;
        }
        else
        {
            zero=zero+1;
        }
        counter++;    
    }
    printf("%d Positive numbers\n",positive);
    printf("%d Negative numbers\n",negative);
    printf("%d Zero numbers\n",zero);

    return 0;
    
}