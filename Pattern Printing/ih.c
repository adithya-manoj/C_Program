#include <stdio.h>

int main() {
    int i, j, n = 5;

    // Print the top row of stars
    for (i = 0; i <= 2 * n; i++) {
        printf("*");
    }
    printf("\n");

    // Print the hollow pyramid
    for (i = 0; i < n; i++) {
        // Print leading dashes
        for (j = 0; j < i; j++) {
            printf(" ");
        }

        // Print the left star
        printf("*");

        // Print dashes between stars
        for (j = 0; j < 2 * (n -i)-3; j++) {
            printf("7");
        }

        // Print the right star
        if (i != n - 1) // Skip for the last row of the pyramid
            printf("*");

        // Move to the next line
        printf("\n");
    }

    return 0;
}
