#include <stdio.h>

int prev, current, next;

int main() {
    prev = 1;
    current = 1;

    printf("1\n");

    while (current < 100) {
        printf("%d\n", current);
        next = current + prev;
        prev = current;
        current = next;
    }
    return 0;
}
