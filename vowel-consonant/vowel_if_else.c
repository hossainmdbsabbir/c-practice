#include <stdio.h>

int main() {
    char myChar;

    printf("Please input a letter: ");
    scanf(" %c", &myChar); 

    if (myChar == 'a' || myChar == 'e' || myChar == 'i' || myChar == 'o' || myChar == 'u') {
        printf("%c is a vowel\n", myChar);
    } else {
        printf("%c is a consonant\n", myChar);
    }

    return 0;
}