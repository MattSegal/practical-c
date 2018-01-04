/*
* Given a mark value, return the grade
*/
#include <stdio.h>

char input[100];
int mark;
char grade[2];

int main() {
    printf("Enter the mark: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &mark);

    if (mark < 0) {
        printf("Error - mark < 0\n");
        return 1;
    } else if (mark <= 60) {
        grade[0] = 'F';
    } else if (mark <= 70) {
        grade[0] = 'D';
    } else if (mark <= 80) {
        grade[0] = 'C';
    } else if (mark <= 90) {
        grade[0] = 'B';
    } else if (mark <= 100) {
        grade[0] = 'A';
    } else {
        printf("Error - mark > 100\n");
        return 1;
    }

    grade[1] = ' ';
    if (mark > 60) {
        mark = mark % 10;
        if (mark > 0 && mark < 4) {
            grade[1] = '-';
        } else if (mark > 7 || mark < 1) {
            grade[1] = '+';
        }
    }
    
    printf("Grade is %s\n", grade);
    return 0;
}
