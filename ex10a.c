#include <stdio.h>
#include <ctype.h> // for toupper()

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("ERROR: You need at least one argument.\n");
        // this is how you abort a program
        return 1;
    }

    int i = 1, j = 0;
    for (i = 1; i < argc; i++) {
        for (j = 0; argv[1][j] != '\0'; j++) {
            char letter = toupper(argv[1][j]);

            switch (letter) {
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    printf("%d: '%c'\n", j, letter);
                    break;

                case 'Y':
                    // why i > 2? is this a bug?
                    if (j > 2) {
                        // it's only sometimes Y
                        printf("%d: 'Y'\n", j);
                        break;
                    }

                default:
                    printf("%d: %c if not a vowel\n", j, letter);
            }
        }
    }

    return 0;
}
