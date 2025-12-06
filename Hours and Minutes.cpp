#include <stdio.h>

int main()
 {
    int minutes, hours, remaining_minutes;

    // Read input
    scanf("%d", &minutes);

    // Convert to hours and minutes
    hours = minutes / 60;
    remaining_minutes = minutes % 60;

    // Print result
    printf("%d Hour(s) %d Minute(s)", hours, remaining_minutes);

    return 0;
}
