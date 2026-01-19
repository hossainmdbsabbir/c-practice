#include <stdio.h>
int main()
{
    int num, reversed = 0, reminder, original;
    printf("Please enter an integer: ");
    scanf("%d", &num);

    //Handle negative numbers
    if (num < 0)
    {
        printf("Negative numbers are not palindromes.\n");
        return 0;
    }

    // Storing the original for later comparison
    original = num;

    // Reversing the number to check if it is same as the input
    while (num != 0)
    {
        reminder = num % 10;
        reversed = (reversed * 10) + reminder;
        num /= 10;
    }

    //Final comparison
    if (original == reversed)
    {
        printf("It's a palindrome.");
    }
    else
    {
        printf("It's not a palindrome.");
    }

    return 0;
}