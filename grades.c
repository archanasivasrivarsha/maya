#include <stdio.h>

int main()
 {
    int physics, chemistry, biology, math, computer;
    float percentage;

    // Input: five space-separated integers
    scanf("%d %d %d %d %d", &physics, &chemistry, &biology, &math, &computer);

    // Calculate percentage
    int total = physics + chemistry + biology + math + computer;
    percentage = (total / 5.0);

    // Determine grade
    if (percentage >= 90)
     {
        printf("Grade A");
    } 
    else if (percentage >= 80)
 {
        printf("Grade ");
    } 
    else if (percenta
