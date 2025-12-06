#include <stdio.h>

int main() 
{
    int N, sum;

    // Input
    scanf("%d", &N);

    // Constraint check (optional)
    if (N < 1 || N > 100) 
    {
        printf("Invalid input. N must be between 1 and 100.");
        return 0;
    }

    // Formula for sum of first N natural numbers
    sum = N * (N + 1) / 2;

    // Output
    printf("%d", sum);

    return 0;
