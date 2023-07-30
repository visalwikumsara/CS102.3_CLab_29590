#include<stdio.h>
int main()
{
    int counter=1,sum=0,n1;
    float avg;

    while (counter<=10)
    {
        printf("Enter %d marks: ",counter);
        scanf("%d",&n1);

        sum=sum+n1;
        counter++;
    }
    avg=(float)sum/10.0;
    printf("Average is %.2f\n",avg);

    if (avg<=50.0)
    {
        printf("You Exam Fail");
    }
    else
    {
        printf("You Exam Pass");
    }
    

    return 0;
    
}