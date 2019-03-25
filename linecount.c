/*
 * Line Count
 *
 * Counts the number of lines entered in stdin, and displays the count in stdout
 */

#include <stdio.h>

int main() {

    // an empty file is assumed to have 1 line
    unsigned long lines = 0;

    int ch;

    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            lines += 1;
            printf("\r%lu", lines);
            fflush(stdout);
        }
    }
    printf("\n");

    return 0;
}
