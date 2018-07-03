#include <stdio.h>
#include <string.h> // for strlen
#include <ctype.h> // for isalpha, isblank, and isdigit

// forward declarations
void print_characters(char arg[]);

void print_arguments(int argc, char *argv[])
{
    int i = 0;

    for (i = 0; i < argc; i++) {
        print_characters(argv[i]);
    }
}

void print_characters(char arg[])
{
    int i = 0;

    for (i = 0; i < strlen(arg); i++) {
        char ch = arg[i];

        if (isalpha((int)ch) || isblank((int)ch)) {
            printf("'%c' == %d ", ch, ch);
        } else if (isdigit((int)ch)) {
            printf("\nNUMBER: '%c' == %d\n", ch, ch);
        } else {
            printf("UNIDENTIFIED CHARACTER: '%c'\n", ch);
        }
    }

    printf("\n");
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}