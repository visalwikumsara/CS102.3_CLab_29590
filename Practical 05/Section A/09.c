#include<stdio.h>
int main()
{
    char letter;
    printf("ASCII value for letters A to Z: \n");
     
    for ( letter = 'A'; letter <= 'Z'; ++letter)
    {
        printf("%c : %d\n",letter,letter);
    }
    


    return 0;
}