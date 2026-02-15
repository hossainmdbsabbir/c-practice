#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, reminder, digit = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while(originalNum != 0){
        originalNum = originalNum / 10;
        digit++;
    }

    originalNum = num;

    while(num != 0){
        reminder = num % 10;
        sum += round(pow(reminder, digit));
        num = num / 10;
    }

    if(originalNum == sum){
        printf("It's an Armstrong number.");
    }else{
        printf("It's not an Armstrong number.");
    }

    return 0;
}