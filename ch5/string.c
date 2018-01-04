#include <stdio.h>
#include <string.h>

char name[4];
char full_name[8];
char name_buffer[100];
int name_length;


int main() {
    name[0] = 'S';
    name[1] = 'a';
    name[2] = 'm';
    name[3] = '\0';
    printf("Name is %s\n", name);
    strcpy(name, "Bob");
    printf("Name is %s\n", name);
    strcpy(full_name, name);
    strcat(full_name, " Lee");
    name_length = strlen(full_name);
    strcpy(name_buffer, full_name);

    // 0 is true whowuldathunkit
    printf(
        "Name is %s, full name is %s and is %d long, also %s is the same is %d\n", 
        name, full_name, name_length, name_buffer, strcmp(name_buffer, full_name)
    );
    return (0);
}