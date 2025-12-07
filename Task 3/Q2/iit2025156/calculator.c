#include <stdio.h>

// Function to add two numbers
float addition(float a, float b) {
    return a + b;
}

// Function to subtract two numbers
float subtraction(float a, float b) {
    return a - b;
}

// Function to multiply two numbers
float multiplication(float a, float b) {
    return a * b;
}

// Function to divide two numbers (safe division)
float division(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return a / b;
}

int main() {
    float num1, num2;
    int choice;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) {
        case 1:
            printf("Result: %.2f\n", addition(num1, num2));
            break;
        case 2:
            printf("Result: %.2f\n", subtraction(num1, num2));
            break;
        case 3:
            printf("Result: %.2f\n", multiplication(num1, num2));
            break;
        case 4:
            printf("Result: %.2f\n", division(num1, num2));
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
