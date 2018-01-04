#include <stdio.h>

char input[10];
int hours;
int minutes;

int main() {
    printf("Enter minutes: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &minutes);

    hours = minutes / 60;
    minutes = minutes % 60;
    printf("Time is %dh %dm\n", hours, minutes);
}