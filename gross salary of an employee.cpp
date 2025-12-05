#include <stdio.h>

int main()
 {
    float salary, hra, da, pf, gross_salary;

    // Input
    scanf("%f", &salary);
    scanf("%f", &hra);
    scanf("%f", &da);

    // Calculate PF and Gross Salary
    pf = 0.12 * salary;
    gross_salary = salary + hra + da + pf;

    // Output
    printf("%.2f", pf);
    printf("%.2f", gross_salary);

    return 0;
}
