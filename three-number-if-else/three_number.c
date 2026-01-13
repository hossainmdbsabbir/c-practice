#include <stdio.h>

/**
 * Program: Find the Maximum and Minimum of Three Numbers
 * Description: Demonstrates multiple ways to use conditional logic in C.
 */

int main() {

    /* ---------------------------------------------------------
       SECTION 1: FINDING THE GREATER NUMBER (LADDER & NESTED)
       (Kept this commented out as per practice)
       --------------------------------------------------------- */
    /*
    int num1, num2, num3;

    printf("Please input three numbers (separated by space): ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Method A: Finding the biggest number using an if-else ladder
    if (num1 > num2 && num1 > num3) {
        printf("Number 1 (%d) is the greatest.\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("Number 2 (%d) is the greatest.\n", num2);
    } else {
        printf("Number 3 (%d) is the greatest.\n", num3);
    }

    // Method B: Finding the biggest number using nested if-else
    int n1, n2, n3;

    printf("\nEnter three more numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2) {
        if (n1 > n3) {
            printf("%d is the greatest.\n", n1);
        } else {
            printf("%d is the greatest.\n", n3);
        }
    } else {
        if (n2 > n3) {
            printf("%d is the greatest.\n", n2);
        } else {
            printf("%d is the greatest.\n", n3);
        }
    }
    */

    /* ---------------------------------------------------------
       SECTION 2: FINDING THE SMALLER NUMBER (LADDER & NESTED)
       --------------------------------------------------------- */

    // Method A: Finding the smallest number using an if-else ladder
    int val1, val2, val3;

    printf("Please input three numbers to find the smallest: ");
    scanf("%d %d %d", &val1, &val2, &val3);

    if (val1 < val2 && val1 < val3) {
        printf("Number 1 is: %d and it is the smallest.\n", val1);
    } 
    else if (val2 < val1 && val2 < val3) {
        printf("Number 2 is: %d and it is the smallest.\n", val2);
    } 
    else {
        printf("Number 3 is: %d and it is the smallest.\n", val3);
    }


    /*
    // Method B: Finding the smallest number using nested if-else
   int val1, val2, val3;

    printf("Please input three numbers to find the smallest: ");
    scanf("%d %d %d", &val1, &val2, &val3);

    // Using nested if-else statements
    if (val1 < val2) {
        if (val1 < val3) {
            printf("Number 1 is: %d and it is the smallest.\n", val1);
        } else {
            printf("Number 3 is: %d and it is the smallest.\n", val3);
        }
    } else {
        if (val2 < val3) {
            printf("Number 2 is: %d and it is the smallest.\n", val2);
        } else {
            printf("Number 3 is: %d and it is the smallest.\n", val3);
        }
    }
    */

    return 0;
}