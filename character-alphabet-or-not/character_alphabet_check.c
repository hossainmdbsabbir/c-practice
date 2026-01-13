#include <stdio.h>

int main() {
    char c;
    printf("Please input an alphabet: ");
    scanf("%c", &c);

    if(c >= 'a' && c <= 'z'){
        printf("It's an alphabet");
    } else if(c >= 'A' && c <= 'Z'){
        printf("It's an alphabet");
    }else{
        printf("It's not an alphabet");
    }

    return 0;
}