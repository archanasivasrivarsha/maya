#include <stdio.h>

int main()
 {
    int units;
    float amount, total_amount;

    // Input: units consumed
    scanf("%d", &units);

    // Calculate base amount based on slabs
    if (units <= 199)
     {
        amount = units * 1.20;
    } 
    else if (units >= 200 && units < 400)
     {
        amount = units * 1.50;
    } 
    else if (units >= 400 && units < 600)
     {
        amount = units * 1.80;
    } 
    else 
    {
