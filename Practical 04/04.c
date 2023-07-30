#include<stdio.h>
int main()
{
    char charactor;
    
    printf("Enter the charactor: ");
    scanf("%c",&charactor);

    switch (charactor)
    {
        case 'A':
        case 'a':printf("%c is a vowel\n",charactor);
        break;
        case 'E':
        case 'e':printf("%c is a vowel\n",charactor);
        break;
        case 'I':
        case 'i':printf("%c is a vowel\n",charactor);
        break;
        case 'O':
        case 'o':printf("%c is a vowel\n",charactor);
        break;
        case 'U':
        case 'u':printf("%c is a vowel\n",charactor);
        break;
    
        default:printf("%c is not vowel\n",charactor);
        break;
    }
}