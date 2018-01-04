/*
* Write a program to find the the distance between two points.
*/
#include <stdio.h>
#include <math.h>

char input[100];
float p1_x, p1_y, p2_x, p2_y;
float distance;

int main() {
    printf("Enter point 1 as 'X Y': ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%f %f", &p1_x, &p1_y);

    printf("Enter point 2 as 'X Y': ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%f %f", &p2_x, &p2_y);

    distance = sqrt(pow(p2_x - p1_x, 2) + pow(p2_y - p1_y, 2));

    printf("Distance is %.2f\n", distance);

    return 0;
}
