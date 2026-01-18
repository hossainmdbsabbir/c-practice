#include <stdio.h>
int main() {
    int num, digit =  0;
    printf("Enter a number: ");
    scanf("%d", &num);

    do{
        num = num / 10;
        digit++;
    }while(num != 0);

    printf("Entered number digits are: %d", digit);
    return 0;
}