#include <stdio.h>

int sum(int num);

int main(){
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);

    result = sum(num);

    printf("Sum of natural number of %d is %d", num, result);
    return 0;
}

int sum(int num){
    if(num != 0){
        return num + sum(num-1);
    }else{
        return num;
    }
}