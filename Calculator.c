#include <stdio.h>

int main() {
    char operator;
    double firstOperand, secondOperand, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &firstOperand, &secondOperand);

    switch (operator) {
        case '+':
            result = firstOperand + secondOperand;
            break;
        case '-':
            result = firstOperand - secondOperand;
            break;
        case '*':
            result = firstOperand * secondOperand;
            break;
        case '/':
            if (secondOperand == 0) {
                printf("Error: Division by zero.");
                return 1;
            }
            result = firstOperand / secondOperand;
            break;
        default:
            printf("Error: Invalid operator.");
            return 1;
    }

    printf("%.2lf %c %.2lf = %.2lf", firstOperand, operator, secondOperand, result);

    return 0;
}
