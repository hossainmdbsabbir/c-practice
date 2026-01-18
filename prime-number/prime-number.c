#include <stdio.h>

int main() {
    int num, isPrime = 1;
    printf("Please enter a positive integer: ");
    scanf("%d", &num);

    if(num <= 1){
        isPrime = 0;
    }

    for(int i = 2; i<=num/2; i++){
        if(num%i == 0){
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 0){
        printf("It's not a prime number.");
    }else{
        printf("It's a prime number");
    }

    return 0;
}