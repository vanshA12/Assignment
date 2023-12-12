//Write the program for calculator using elseif and do while
#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    if (operator == '+') {
        printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2);
    } else if (operator == '-') {
        printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
    } else if (operator == '*') {
        printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
    } else if (operator == '/') {
        if (num2 != 0.0) {
            printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
        } else {
            printf("Error! Division by zero is not allowed.");
        }
} else {
        printf("Error! Invalid operator.");
    }

    return 0;
}