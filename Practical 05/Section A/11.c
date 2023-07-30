#include<stdio.h>
int main()
{
    int num,count=1;
    printf("Enter a number: ");
    scanf("%d",&num);

    for (int i = 2; i <= num; i++)
    {
        if (num % i== 0)
        {
            count++;
        }
        
    }
    if(count<=2){
        printf("ok");
    }
    else{
        printf("no");
    }
    
    


    return 0;
}