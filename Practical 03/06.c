#include <stdio.h>

int main() {
    char upperCaseLetter;
    char lowerCaseLetter;
    char digit;
    char specialCharacter;
    char newline; 

    
    printf("Enter an uppercase letter: ");
    scanf(" %c", &upperCaseLetter);

    int asciiValue1 = (int) upperCaseLetter;

    printf("The ASCII value of %c is %d\n", upperCaseLetter, asciiValue1);

    
    printf("Enter a lowercase letter: ");
    scanf(" %c", &lowerCaseLetter);

    int asciiValue2 = (int) lowerCaseLetter;

    printf("The ASCII value of %c is %d\n", lowerCaseLetter, asciiValue2);

    
    printf("Enter a digit: ");
    scanf(" %c", &digit);

    int asciiValue3 = (int) digit;

    printf("The ASCII value of %c is %d\n", digit, asciiValue3);

    
    printf("Enter a special character: ");
    scanf(" %c", &specialCharacter);

    int asciiValue4 = (int) specialCharacter;

    printf("The ASCII value of %c is %d\n", specialCharacter, asciiValue4);

    return 0;
}
