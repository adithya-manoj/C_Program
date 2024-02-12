#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the value of m: ");
    scanf("%d", &m);

    if (m > 0) {
        m = 1;
    } else if (m == 0) {
        m = 0;
    } else {
        m = -1;
    }

    printf("The value of m is: %d\n", m);

    return 0;
}
