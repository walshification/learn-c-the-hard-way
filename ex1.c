#include <stdio.h> // how to import another file's behavior into this one

/* This is a multi-line comment.
Any number of characters can go here. */
int main(int argc, char *argv[]) // The main function that gets this whole show running
// argc is an integer that represents the count of arguments passed into main
// char *argv[] is an array of strings for arguments
{ // the start of the function block

    /* variable declaration and assignment
    in C, all statements (except for logic) must end with a ;
    in English, the below line reads:
    "create an integer referred to as 'distance' and assign it the value 100." */
    int distance = 100;

    // this is a one-line comment
    // printf sends a string and any number of variables to stdout
    printf("You are %d miles away.\n", distance);
    printf(
        "I will write five more lines of input here. I wonder if there is a way "\
        "to string lines along as they go.\n"
    ); // that ^ works!
    printf("Holy cow, that worked!");
    printf("I need to add %s more lines,\nso I'll cheat a little.\nMwa ha ha!\n", "two");

    // our last statement, which returns a code to our UNIX-based OS that tells
    // it how the execution of the program went. 0 means no errors.
    return 0;
} // the closing of our execution block
