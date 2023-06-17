#include <stdio.h>
int main() {
    float op1, op2, result;
    char operator;

    printf("Enter Number1: ");
    scanf("%f", &op1);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    printf("Enter Number2: ");
    scanf("%f", &op2);

    switch (operator) {
        case '+':
            result = op1 + op2;
            break;
        case '-':
            result = op1 - op2;
            break;
        case '*':
            result = op1 * op2;
            break;
        case '/':
            if (op2 != 0) {
                result = op1 / op2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 0;
            }
            break;
        default:
            printf("Invalid operator.\n");
            return 0;
    }

    printf("Result: %f\n", result);

    return 0;
}
