/*
* Given a mark value, return the grade
*/
#include <stdio.h>

char input[100];
float mark;
char grade;

int main() {
    printf("Enter the mark: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%f", &mark);

    if (mark < 0) {
        printf("Error - mark < 0\n");
        return 1;
    } else if (mark <= 60) {
        grade = 'F';
    } else if (mark <= 70) {
        grade = 'D';
    } else if (mark <= 80) {
        grade = 'C';
    } else if (mark <= 90) {
        grade = 'B';
    } else if (mark <= 100) {
        grade = 'A';
    } else {
        printf("Error - mark > 100\n");
        return 1;
    }
    printf("Grade is %c\n", grade);
    return 0;
}
