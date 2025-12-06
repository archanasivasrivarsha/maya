#include <stdio.h>

int main() 
{
    int num1, num2;

    // Input: two space-separated integers
    scanf("%d %d", &num1, &num2);

    // Perform arithmetic operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;
    int remainder = num1 % num2;

    // Output results
    printf("Sum:%d", sum);
    printf("Difference:%d", difference);
    printf("Product:%d", product);
    printf("Quotient:%d", quotient);
    printf("Remainder:%d", remainder);

    return 0;

