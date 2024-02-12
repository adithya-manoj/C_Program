#include<stdio.h>
    
int main()
{

    int n,i, largest=0,arr[50];

    printf("Enter the size of array:");
    scanf("%d", &n);

    printf("Enter the elements into array:");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The Elements are: ");
    for(i=0; i<n; i++){
    printf("%d ", arr[i]);
    }
    printf("\n");
    printf("The largest Element is ");
    for(i=0; i<n; i++){
    if (arr[i]>largest)
    {
        largest = arr[i];
        if()
    }}
    printf("%d ", largest);
    return 0;
}