#include <stdio.h>

int main() {
    int i, j, n, temp;
    int arr[30];
    
    printf("Enter the Number of Elements: ");
    scanf("%d", &n);
    printf("Enter the Numbers: ");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The Entered Elements are: ");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nThe Sorted Array is: ");

    for (i = 0; i < n/2; i++) {
        printf("%d ", arr[i]);
    }

    for(i=n-1;i>=n/2;i--){
        printf("%d ", arr[i]);
    }

    return 0;
}
