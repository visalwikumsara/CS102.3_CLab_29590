#include<stdio.h>
int main()
{
    int n1,n2,n3,large,small;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&n1,&n2,&n3);

    large=n1;
    if(n1>large)
    {
        large=n1;
    }
    if(n3>large)
    {
        large=n3;
    }
    
    small=n2;
    if(n1<small)
    {
        small=n1;
    }
    if(n3<small)
    {
        small=n3;
    }

    printf("Largest value is %d\n",large);
    printf("Smallest value is %d\n",small);

    return 0;
      
}