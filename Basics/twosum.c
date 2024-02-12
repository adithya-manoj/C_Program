#include<stdio.h>
    
int main() {

    int n,i,j, arr[50], target;

    printf("Enter the size of array:");
    scanf("%d", &n);
    printf("Enter the elements into array:");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &target);
    for(i=0; i<n; i++){
    printf("%d ", arr[i]);
    }
    for(i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
if(arr[i] + arr[j] == target)
{
printf("\nFound");
break;
}
else{
printf("Not found");
}
}