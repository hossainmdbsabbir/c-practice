#include <stdio.h>

int prime();

int main()
{
    int result;

    result = prime();

    if (result == 0)
    {
        printf("It's not a prime number");
    }
    else
    {
        printf("It's a prime number");
    }

    return 0;
}

int prime()
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

    return isPrime;
    
}