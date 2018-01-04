#include <stdio.h>

float temp_c;
float temp_f;

int main(int argc, char const *argv[]) {
    // argc is 'argument count' - the number of arguments
    // argv is 'argument vector'
    if (argc < 2) {
        printf("Provide an integer argument.\n");
        return 1;
    }
    sscanf(argv[1], "%f", &temp_c);
    temp_f = 1.8 * temp_c + 32;

    printf("Temperature C: %.2f\n", temp_c);
    printf("Temperature F: %.2f\n", temp_f);
    return 0;
}