#include <stdio.h>

int main()
{
    int basic_salary;
    float da, hra, gross_salary;

    // Input
    scanf("%d", &basic_salary);

    // Conditions
    if (basic_salary <= 10000)
    {
        da = 0.80 * basic_salary;
        hra = 0.20 * basic_salary;
    }
    else if (basic_salary <= 20000)
    {
        da = 0.90 * basic_salary;
        hra = 0.25 * basic_salary;
    }
    else
    {
        da = 0.95 * basic_salary;
        hra = 0.30 * basic_salary;
    }

    // Gross Salary
    gross_salary = basic_salary + da + hra;

    // Output with 2 decimal places

