#include <stdio.h>

int main()
 {
    int T, S, B;
    scanf("%d %d %d", &T, &S, &B);

    // Each block has 512 bytes, and there are 2 surfaces
    long long total_bytes = 2LL * T * S * B * 512;
    long long capacity_kb = total_bytes / 1024;

    printf("%lld KB", capacity_kb);
    return 0;
}
