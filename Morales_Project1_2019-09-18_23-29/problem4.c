#include <stdio.h>
#include <stdlib.h>
/* Recursive function that takes an integer as argument and
returns an integer indicationg the number of blocks needed
for a triangle of the given base */
int calculate(int base) {
    if (base <= 0) {
        return 0;
    } else if (base == 1) {
        return 1;
    } else {
        return calculate( base - 1) + base;
    }
}

int main() {
    int n = 0;
    printf("How many blocks on the bottom row boss? ");
    scanf("%d", &n);
    printf("\n");

    printf("You need %i blocks total.\n", calculate(n));

    return EXIT_SUCCESS;
}
