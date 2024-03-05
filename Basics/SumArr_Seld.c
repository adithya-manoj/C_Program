#include <stdio.h>

int main() {
    int i, j, n, temp;
    int arr[30];
    int brr[30]={0};
    
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


    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i != j){
                brr[i]+=arr[j];
            }
        }
    }
    printf("\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", brr[i]);
    }
    
    return 0;
}