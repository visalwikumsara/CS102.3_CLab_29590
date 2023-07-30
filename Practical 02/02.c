#include<stdio.h>
int main()
{
    printf("2\t4\t8\n");
    printf("3\t9\t27\n");
    printf("4\t16\t64\n\n");

    printf("%5d%5d\n",1,2 );//Right Align
    printf("%5d%5d\n",10,20 );//Right Align
    printf("\n\n");
    printf("%-5d%-5d\n",1,2 );//Left Align
    printf("%-5d%-5d\n",10,20 );//Left Align
    printf("\n\n");
    
    printf("%-5d%-5d%-5d\n",2,4,8);
    printf("%-5d%-5d%-5d\n",3,9,27);
    printf("%-5d%-5d%-5d\n",4,16,64);

    return 0;     
}