#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    while (i < 25) {
        printf("%d\n", i);
        i++;
    }

    int j = 25;
    while (j >= 0) {
        printf("%d\n", j);
        j--;
    }

    j = 1;
    while (j < i) {
        if (j % 15 == 0) {
            printf("FizzBuzz\n");
        } else if (j % 3 == 0) {
            printf("Fizz\n");
        } else if (j % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", j);
        }
        j++;
    }

    // need this to add a final newline
    printf("\n");

    return 0;
}
