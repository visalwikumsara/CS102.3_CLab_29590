#include<stdio.h>
int main()
{
    int counter=1, sum=0;
    int marks[10], max, min;
    float avg;
    while (counter<=10)
    {
        printf("Student %d mark: ",counter);
        scanf("%d",&marks[counter]);
        sum=sum+marks[counter];
        counter++;
    }
    
    avg=(float)sum/10.0;

    max = marks[1];
    min = marks[1];
    for ( counter = 2; counter < 10; counter++)
    {
        if (marks[counter] > max)
        {
            max = marks[counter];
        }
        if (marks[counter] < min)
        {
            min = marks[counter];
        }
        
        
    }
    
    printf("The average is %.2f\n",avg);
    printf("Maximum marks: %d\n", max);
    printf("Minimum marks: %d\n", min);
    


} 