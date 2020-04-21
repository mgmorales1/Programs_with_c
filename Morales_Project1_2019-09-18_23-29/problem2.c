#include <stdio.h>
#include <stdlib.h>

int main() {
    int arrowhead = 0;
    int shaft = 0;
    printf("How many rows high for the arrowhead? ");
    scanf("%d", &arrowhead);
    printf("\nHow many rows high for the shaft? ");
    scanf("%d", &shaft);
    printf("\n");

    int row;
    int col;
    /* Test for valid input for arrowhead height*/
    if (arrowhead > 0) {
    /* Double for loop that prints out the arrow based on the
    given input for arrowhead */
        for (row = 1; row < arrowhead + 1; row++) {
        for (col = arrowhead + row; col > 0; col--) {
            if (col > (row * 2)) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    }

    int i;
    int j;
    int limit;
    /* Assigns the variable limit a value based on the
    input for arrowhead to control the number of spaces in the shaft*/
    if (arrowhead < 0) {
        limit = 1;
    } else {
        limit = arrowhead;
    }
    /* Test for valid input for shaft height */
    if (shaft > 0) {
        /* Double for loop that prints out the shaft based on the
        given shaft height input */
        for (i = 0; i < shaft; i++) {
        for (j = 1; j < limit + 2; j++) {
            if (j < (limit)) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    }
    return EXIT_SUCCESS;
}
