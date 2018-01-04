/*
* Given some money - $0.00 to $0.99
* calculate the number of quaters, dimes, nickels and pennies needed
*/
#include <stdio.h>

const int NUM_COIN_TYPES = 4;
const double EPSILON = 0.0001;

char input[100];
double coins[] = {0.25, 0.1, 0.05, 0.01};
char* names[] = {"quarters", "dimes", "nickels", "pennies"};
double change;
char grade;
int idx, count;

int main() {
    printf("Enter the change: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%lf", &change);

    idx = 0;
    while (idx < NUM_COIN_TYPES) {
        count = 0;
        while (coins[idx] <= change + EPSILON) {
            change -= coins[idx];
            count++;
        }
        printf("%d %s required\n", count, names[idx]);
        idx++;
    }
    return 0;
}
