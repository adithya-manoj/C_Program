#include<stdio.h>

int main()
{
    int m, n;

    printf("Enter the number: ");
    scanf("%d", &m);

    if (m > 0) {
        n = 1;
        printf("%d\n", n);
    } else if (m == 0) {
        n = 0;
        printf("%d\n", n);
    } else {
        n = -1;
        printf("%d\n", n);
    }

    return 0;
}
