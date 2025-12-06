#include <stdio.h>

int main() 
{
    int A, B, sum;
    
    // Read two integers from input
    scanf("%d %d", &A, &B);
    
    // Calculate the sum
    sum = A + B;
    
    // Print the sum with an extra '1' appended
    printf("%d1", sum);
    
    return 0;
}
