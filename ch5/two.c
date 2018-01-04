#include <stdio.h>
#include <math.h>

double radius;
double volume;

int main(int argc, char const *argv[]) {
    // argc is 'argument count' - the number of arguments
    // argv is 'argument vector'
    if (argc < 2) {
        printf("Provide an integer argument.\n");
        return 1;
    }
    sscanf(argv[1], "%lf", &radius);

    volume = (4.0 / 3.0) * pow(radius, 3) * M_PI;
    
    printf("Sphere radius is: %.2lf\n", radius);
    printf("Sphere volume is: %.2lf\n", volume);
    return 0;
}