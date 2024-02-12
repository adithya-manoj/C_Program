#include <stdio.h>
int main() 
{
    int n, i,max, arr[50];

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

    max=arr[0];
    for(i=0; i<n; i++){
    if (max<arr[i])
    {

        max=arr[i];
    }
    }

    printf("\nThe Largest Element is %d", max);
    
return 0;
}