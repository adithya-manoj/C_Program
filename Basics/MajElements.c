#include <stdio.h>
int main() {
    int n, i, j, arr[50];
    int count = 0, majorityElement = -1;
    printf("Enter the size of array:");
    scanf("%d", &n);

    printf("Enter the elements into array:");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The Elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        
    }
    printf("\n");

    for (i = 0; i < n; i++) {
        count = 0;
        for (j = i; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > n / 3) {
            majorityElement = arr[i];
        
        }
    }

    if (majorityElement != -1)
        printf("The Majority Element is %d", majorityElement);
    else
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);}

    return 0;
}
