#include <stdio.h>

int main() {
    int i, j, n, ascval = 65; // Initialize ascval to 'A'
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf("%c ", ascval++); // Print character and increment
        }
        printf("\n");
    }
    return 0;
}
