#include <stdio.h>
char line[100];
int value;

int main() {
    printf("Enter a value: ");
    fgets(line, sizeof(line), stdin);
    
    // sscanf(str, format, &val1, &val2, ...);
    sscanf(line, "%d", &value);

    printf("Twice %d is %d\n", value, 2 * value);
    return (0);
}
