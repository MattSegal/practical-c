// Write a program that, given the number of hours an employee worked and the hourly wage,
// computes the employee’s weekly pay.
// Count any hours over 40 as overtime at time and a half.
#include <stdio.h>

char input[10];
double overtime_hours;
double pay = 0;
double hours_worked;
double hourly_wage;

int main() {
    printf("Enter hours worked: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%lf", &hours_worked);

    printf("Enter wage: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%lf", &hourly_wage);

    overtime_hours = 0;
    if (hours_worked > 40) {
        overtime_hours = hours_worked - 40;
        hours_worked = hours_worked - overtime_hours;
    }

    pay = (
        (hours_worked * hourly_wage) +
        (1.5 * overtime_hours * hourly_wage) 
    );

    printf("Weekly pay is %.2lf\n", pay);
    return 0;
}