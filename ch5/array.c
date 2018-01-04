#include <stdio.h>

float data[5];
float total;
float average;

int main() {
    data[0] = 1.0;
    data[1] = 2.0;
    data[2] = 3.0;
    data[3] = 5.0;
    data[4] = 8.0;
    total = data[0] + data[1] + data[2] + data[3] + data[4];
    average = total / 5.0;
    printf("Total %.2f average %.2f\n", total, average);
    return (0);
}