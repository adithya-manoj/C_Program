#include <stdio.h>

void reverseFloydsTriangle(int rows) {
    int num = 1;
    int rowCount = 0;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
        rowCount++;
    }

    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
        rowCount++;
    }
}

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    reverseFloydsTriangle(rows);

    return 0;
}
