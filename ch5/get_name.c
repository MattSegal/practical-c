#include <string.h>
#include <stdio.h>

char first[20];
char last[20];
char full[40];

int main() {
    printf("Enter first name: ");
    fgets(first, sizeof(first), stdin);
    first[strlen(first) - 1] = '\0';

    printf("Enter last name: ");
    fgets(last, sizeof(last), stdin);
    last[strlen(last) - 1] = '\0';
    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);
    printf("The name is %s\n", full);
    return (0);
}