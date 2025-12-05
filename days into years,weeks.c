#include <stdio.h>

int main() {
    int D, years, weeks;

    // Read input
    scanf("%d", &D);

    // Convert days to years and weeks
    years = D / 365;
    weeks = (D % 365) / 7;

    // Output the result
    printf("%d
", years);
    printf("%d
", weeks);

    return 0;
}
