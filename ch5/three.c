#include <stdio.h>

char input[10];
int width;
int height;

int main() {
    printf("Enter rectangle width: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &width);

    printf("Enter rectangle height: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &height);

    printf("Perimeter of rectangle is %d\n", 2 * (width + height));
    return 0;
}