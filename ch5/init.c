// Array sugar - length inferred to be 3
int nums[] = {1, 2, 3};

// 3:9 filled with 0s
int more_nums[10] = {1, 2, 3};

int matrix[][] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

// cannot be changed
const int FOO = 1;

// String sugar - equivalent
char first[] = {'S', 'a', 'm', '\0'}
char last[] = "Sam"; // length of 4 since space is allocated for \0
char mid[50] = "Sam"; // length of 50 - equivalent of using strcpy

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}