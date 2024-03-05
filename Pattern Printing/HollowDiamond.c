#include <stdio.h>
int main()
{
    int n, rows, columns;
    printf("Enter the number of Rows: ");
    scanf("%d", &n);
    
    for (rows = 1; rows <= n; rows++) {
 
        for (columns = n; columns > rows; columns--) {
            printf(" ");
        }
  
        printf("*");
 
        for (columns = 1; columns < (rows - 1) * 2;
             columns++) {
            printf(" ");
        }
        if (rows == 1) {
            printf("\n");
        }
        else {
            printf("*\n");
        }
    }

    for (rows = n - 1; rows >= 1; rows--) {
 
        for (columns = n; columns > rows; columns--) {
            printf(" ");
        }
 
        printf("*");
        for (columns = 1; columns < (rows - 1) * 2;
             columns++) {
            printf(" ");
        }
        if (rows == 1) {
            printf("\n");
        }
        else {
            printf("*\n");
        }
    }
    return 0;
}
