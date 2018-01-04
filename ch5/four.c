#include <stdio.h>

const float KM_PER_MILE = 1.60934;

char input[10];
int distance_km;
float distance_mi;

int main() {
    printf("Enter distance in km: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &distance_km);

    distance_mi = distance_km * KM_PER_MILE;
    printf("Distance in miles is %f\n", distance_mi);
    return 0;
}