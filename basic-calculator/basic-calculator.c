#include<stdio.h>

int main(){

    char operator;
    char spaceHolder;
    int num1, num2;

    here:
    printf("please input the operation from +, -, *, /");
    scanf("%c", &operator);

    printf("please input two number");
    scanf("%d %d", &num1, &num2);

    switch (operator){
        case '+':
        printf("%d + %d = %d", num1, num2, num1 + num2);
        break;
        case '-':
        printf("%d - %d = %d", num1, num2, num1 - num2);
        break;
        case '*':
        printf("%d * %d = %d", num1, num2, num1 * num2);
        break;
        case '/':
        printf("%d / %d = %d", num1, num2, num1 / num2);
        break;
        default:
        printf("invalid input\n");
        scanf("%c", &spaceHolder);
        goto here;
    }

    return 0;
}