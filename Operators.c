#include <stdio.h>

// Function to perform the arithmetic operation
float calculate(float num1, float num2, char op) {
    if (op == '+') return num1 + num2;
    if (op == '-') return num1 - num2;
    if (op == '*') return num1 * num2;
    if (op == '/') {
        if (num2 != 0) return num1 / num2;
        else {
            printf("Error: Division by zero!\n");
            return 0;  // Return 0 for division by zero
        }
    }
    return 0;  // Return 0 if invalid operator
}

int main() {
    float num1, num2;
    char op;

    // Input two numbers and an operator
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);  // Space before %c to handle newline characters

    // Perform the operation and display the result
    float result = calculate(num1, num2, op);
    printf("Result: %.2f\n", result);

    return 0;
}
