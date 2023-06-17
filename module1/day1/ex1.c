//Level-1 :
//1. Write a function to find biggest of 2 numbers using 
//  - if else
//  - ternary operator
#include <stdio.h>
void biggestternaryoperator(int a, int b, int *result) {
    *result = (a > b) ? a : b;
}
void biggestifelse(int a, int b, int *result) {
    if (a > b) {
        *result = a;
    } else {
        *result = b;
    }
}

int main() {
    int num1,num2;
    printf("enter two numbers");
    scanf("%d %d",&num1,&num2);
    int result;

    biggestternaryoperator(num1, num2, &result);
    printf("Using ternary operator: %d\n", result);
    biggestifelse(num1, num2, &result);
    printf("Using if-else: %d\n", result);

    return 0;
}
