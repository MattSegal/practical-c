#include <stdio.h>

char input[10];
int hours;
int minutes;

int main() {
    printf("Enter hours: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &hours);

    printf("Enter minutes: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &minutes);

    minutes = 60 * hours + minutes;
    printf("Total minutes is %d\n", minutes);
}