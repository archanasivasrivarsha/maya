include <stdio.h>

int main() 
{
    int x, y;
    scanf("%d %d", &x, &y);

    // Calculate attendance percentage
    double attendance = (y * 100.0) / x;

    if (attendance >= 75)
        printf("ELIGIBLE");
    else
        printf("NOT ELIGIBLE");

    return 0;
}
