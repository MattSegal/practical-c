/*
A serial transmission line can transmit 960 characters / s ie 7680 bytes / s
Calculate the time required to send a file, given its size
*/
#include <stdio.h>

int bytes;

int main(int argc, char const *argv[])
{
    if (argc < 1) {
        return 1;
    }
    sscanf(bytes, "%d", &argv[0]);
    printf("%d\n", bytes);
    return 0;
}