#include <stdio.h>

int main() 
{
    long long N, M;
    if (scanf("%lld %lld", &N, &M) != 2) return 0;
    long long result = (M / 2) + 1;  // floor(M/2) + 1
    printf("%lld", result);
    return 0;
}
