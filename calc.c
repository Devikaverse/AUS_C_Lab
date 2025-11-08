#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;
    printf("Simple Calculator\n");
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%f", &num2);
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2f\n",result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f\n",result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f\n",result);
            break;
        case '/':
                result = num1 / num2;
                printf("%.2f\n",result);
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
