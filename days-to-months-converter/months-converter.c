#include <stdio.h>
int main() {
    int months, days;
    printf("Please enter days: ");
    scanf("%d", &days);

    months = days / 30;
    days = days % 30;

    printf("%d Months and %d Days", months, days);
}