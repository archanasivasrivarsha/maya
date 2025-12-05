#include <stdio.h>

int main()
 {
    int total_seconds, hours, minutes, seconds;

    // Input
    scanf("%d", &total_seconds);

    // Conversion
    hours = total_seconds / 3600;
    total_seconds %= 3600;
    minutes = total_seconds / 60;
    seconds = total_seconds % 60;

    // Output
    printf("H:M:S-%d:%d:%d", hours, minutes, seconds);

    return 0;
}
