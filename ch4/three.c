#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("A 3 x 5 rectangle has perimeter %d and area %d\n",
        2 * (3 + 5), 3 * 5 
    );
    printf("A 6.8 x 2.3 rectangle has perimeter %.2f and area %.2f\n",
        2 * (6.8 + 2.3), 6.8 * 2.3 
    );
    return 0;
}