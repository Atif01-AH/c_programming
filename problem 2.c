#include <stdio.h>

int main() {
    float basic_salary, da, hra, gross_salary;

    // Input the basic salary
    printf("Enter Ramesh's basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate dearness allowance (40% of basic)
    da = 0.40 * basic_salary;

    // Calculate house rent allowance (20% of basic)
    hra = 0.20 * basic_salary;

    // Calculate gross salary
    gross_salary = basic_salary + da + hra;

    // Display the result
    printf("Gross Salary of Ramesh = %.2f\n", gross_salary);

    return 0;
}

