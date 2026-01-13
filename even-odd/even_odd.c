#include <stdio.h>

int main(){

    int userInput;

    printf("Please input an integer number");
    scanf("%d", &userInput);

    if(userInput%2==0){
        printf("It's an even number");
    } else if(userInput%2==1){
        printf("This is an odd number");
    } else {
        printf("Invalid input");
    }

    return 0;
}