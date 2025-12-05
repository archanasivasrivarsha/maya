#include <stdio.h>

int main()
{
    int side;
    scanf("%d", &side);

    // Calculate surface area and volume
    int surface_area = 6 * side * side;
    int volume = side * side * side;

    // Output the results
    printf("Surface area = %d and Volume = %d", surface_area, volume);

    return 0;
}

