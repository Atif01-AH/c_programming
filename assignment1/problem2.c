#include <stdio.h>
int main(){
    float basic_salary,gross_salary,dearness_allowance,houserent_allowance;
    printf("Enter basic salary of ramesh:");
    scanf("%f",&basic_salary);
    dearness_allowance = 0.40;
    houserent_allowance = 0.20;
    gross_salary = basic_salary+dearness_allowance+houserent_allowance;
    printf("Gross salary of ramesh %2f\n",gross_salary);
    return 0;
}
