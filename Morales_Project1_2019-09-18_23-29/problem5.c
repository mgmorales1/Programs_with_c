#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Function that uses Binet's formula to return an integer of the nth
fibonacci number based on the given integer argument */
int fibonacci(int n) {
    double root = sqrt(5.0);
    return (int)((1 / root ) * (pow((double)((1 + root ) / 2), (double)n) -
    (pow((double)((1 - root)/2), (double) n))));;
}
int main() {
    int n = 0;
    printf("How many terms should I generate boss? ");
    scanf("%d", &n);
    printf("\n");
    int i;
    /* Loop that prints each fibonacci number until the given input */
    for (i = 1; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return EXIT_SUCCESS;
}
