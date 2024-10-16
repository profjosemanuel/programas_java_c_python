#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

    printf("Enter an arithmetic operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0)   
 {
                printf("Error: Division by zero is not allowed.\n");
                return   
 1; // Indicate an error
            }
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator. Please choose +, -, *, or /.\n");
            return 1; // Indicate an error
    }

    printf("Result: %d\n", result);

    return 0;
}
