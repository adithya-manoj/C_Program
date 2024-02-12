#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char c[100];
    char d[100];
    int i,j, len;

    printf("Enter a string: ");
    scanf("%s", c);
    len = strlen(c);

    for (i = 0; i < len; i++) {
        if (c[i] != 'a' && c[i] != 'e' && c[i] != 'i' && c[i] != 'o' && c[i] != 'u' &&
            c[i] != 'A' && c[i] != 'E' && c[i] != 'I' && c[i] != 'O' && c[i] != 'U') {
            d[i] = c[i];
        }
    }
    d[i] = '\0'; // Null-terminate the output string

    printf("String without vowels: %s\n", d);

    return 0;
}
