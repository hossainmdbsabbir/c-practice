#include <stdio.h>
int main() {
    int number;

    printf("Enter an integer: ");
    if(scanf("%d", &number) == 0){
        printf("Invalid Input");
        return 0;
    }

    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}