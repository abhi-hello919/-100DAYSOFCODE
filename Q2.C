//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

void perform_calculations() {
    double num1, num2;
    
    printf("Enter Num1: ");
    
    if (scanf("%lf", &num1) != 1) {
        printf("Error: Invalid input for the first number.\n");
        while(getchar() != '\n'); 
        return;
    }

    printf("Enter Num2: ");

    if (scanf("%lf", &num2) != 1) {
        printf("Error: Invalid input for the second number.\n");
        while(getchar() != '\n');
        return;
    }
    
    double sum_result = num1 + num2;
    double diff_result = num1 - num2;
    double prod_result = num1 * num2;
    
    printf("Sum=%.0lf, Diff=%.0lf, Product=%.0lf", 
           sum_result, diff_result, prod_result);

    if (num2 != 0) {
        double quot_result = num1 / num2;
        printf(", Quotient=%.2lf\n", quot_result);
    } else {
        printf(", Quotient=Error (Division by Zero)\n");
    }
}

int main() {
    perform_calculations();
    return 0;
}
