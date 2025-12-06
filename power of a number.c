#include <stdio.h>
#include <math.h>

int main()
 {
    int x, y, M;
    scanf("%d %d %d", &x, &y, &M);

    // Use long long to handle large intermediate results
    long long result = 1;
    long long base = x % M;

    while (y > 0)
     {
        if (y % 2 == 1)
         {
            result = (result * base) % M;
        }
        base = (base * base) % M;
        y = y / 2;
    }

    printf("%lld", result);
    return 0;
}
