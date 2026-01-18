#include <stdio.h>
int main() {
    int num, reminder, reverse = 05;
    printf("Please enter a number: ");
    scanf("%d", &num);

    while(num != 0){
        reminder = num % 10;
        reverse = reverse * 10 + reminder;
        num = num / 10;
    }

    printf("Reversed number is: %d", reverse);
    return 0;
}