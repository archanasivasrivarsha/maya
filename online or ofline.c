#include <stdio.h>

int main() 
{
    int N, M;
    scanf("%d %d", &N, &M);

    // Calculate discounted online cost
    float onlineCost = N * 0.9;

    if (onlineCost < M)
     {
        printf("ONLINE");
    } else if (onlineCost > M)
     {
        printf("DINING");
    }
     else 
     {
        printf("EITHER");
    }

    return 0;
}
