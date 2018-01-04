#include <stdio.h>

char line[100];
int width, height, area;

int main()
{
    printf("Enter \"<width> <height>\": ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d", &width, &height);
    area = (width * height) / 2;
    printf("The area is %d\n", area);
    return 0;
}
