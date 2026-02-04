#include <stdio.h>

void prime();

int main()
{
    prime();

    return 0;
}

void prime()
{
    int num, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1){
        isPrime = 0;
    }else{
        for (int x = 2; x <= num / 2; x++)
        {
            if (num % x == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 0)
    {
        printf("It's not a prime number");
    }
    else
    {
        printf("It's a prime number");
    }
}