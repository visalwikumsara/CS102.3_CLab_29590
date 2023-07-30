#include<stdio.h>
int main()
{
    int Num01,Num02,temp;// swap = "temp"
    printf("First Numbers: \n");
    scanf("%d",&Num01);
    printf("Second Number: \n");
    scanf("%d",&Num02);
    temp=Num01;
    Num01=Num02;
    Num02=temp;
    printf("Number one: %d\n",Num01);
    printf("Number two: %d\n",Num02);
    return 0;
}                          