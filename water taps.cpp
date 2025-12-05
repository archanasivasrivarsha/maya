#include <stdio.h>

int main() 
{
    int A, B;
    scanf("%d %d", &A, &B);

    // Calculate the combined rate: 1/A + 1/B = (A + B) / (A * B)
    // Time to fill the tank = 1 / combined rate = (A * B) / (A + B)
    int time = (A * B) / (A + B);

    printf("%d", time);
    return 0;
}
