#include <stdio.h>

int main() {
    int i, j, n, ascval = 65;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf("%c ", ascval++);
        }
        printf("\n");
    }
    return 0;
}
