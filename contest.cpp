#include <stdio.h>

int main()
 {
    int X, A, B;
    
    // Read input values
    scanf("%d %d %d", &X, &A, &B);
    
    // Calculate total score
    int total = A * 1 + B * 2;
    
    // Check qualification
    if (total >= X) {
        printf("Qualify");
    } 
    else
     {
        printf("Not Qualify");
    }
    
    return 0;
}
