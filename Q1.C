//Write a program to input two numbers and display their sum.

#include <stdio.h>

int main() {
    // Declare three double variables for the two numbers and their sum.
    double num1, num2, sum;

    // Prompt the user for the first number and read the input.
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    // Prompt the user for the second number and read the input.
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Calculate the sum.
    sum = num1 + num2;

    // Display the final result.
    printf("The sum is: %.2lf\n", sum);

    return 0;
}
