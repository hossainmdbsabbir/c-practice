#include<stdio.h>

int main(){
    char charInput;

    printf("Enter an alphabet: ");
    scanf("%c", &charInput);

    switch (charInput){
        case 'a': 
        printf("%c is a vowel", charInput);
        break;

        case 'e': 
        printf("%c is a vowel", charInput);
        break;

        case 'i': 
        printf("%c is a vowel", charInput);
        break;

        case 'o': 
        printf("%c is a vowel", charInput);
        break;

        case 'u': 
        printf("%c is a vowel", charInput);
        break;

        default:
        printf("%c is a consonent", charInput);
    }
}