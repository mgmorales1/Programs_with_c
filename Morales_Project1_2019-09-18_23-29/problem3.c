#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    printf("How many outputs shall I generate? ");
    scanf("%d", &n);
    printf("\n");
    int i;
    /* Test for valid input */
    if (n > 0) {
        /* Takes input to loop through and print each number.
        If the number is divisible by 3, output is "Hey", by 5,
        output is "Howdy", by both, output is "HeyHowdy" */
      for (i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("HeyHowdy\n");
        } else if (i % 3 == 0) {
            printf("Hey\n");
        } else if (i % 5 == 0) {
            printf("Howdy\n");
        } else {
            printf("%d\n", i);
        }
      }
    }
    return EXIT_SUCCESS;
}
