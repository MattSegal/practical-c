// A leap year is any year divisible by 4,
// unless the year is divisible by 100, but not 400.
// Write a program to tell if a year is a leap year.
#include <stdio.h>

char input[10];
int year;
int is_leap_year;

int main() {
    printf("Enter the year: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &year);

    is_leap_year = (
        (year % 4 == 0) && 
        !(
            (year % 100 == 0) &&
            !(year % 400 == 0)
        )
    );

    if (is_leap_year) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}