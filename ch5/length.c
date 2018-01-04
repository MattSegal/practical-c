#include <string.h>
#include <stdio.h>

char line[100];

int main() {
    printf("Enter a line: ");
    fgets(line, sizeof(line), stdin);
    // N.B counts \n on enter press
    printf("The length of the line is %lu\n", strlen(line));
    return (0);
}