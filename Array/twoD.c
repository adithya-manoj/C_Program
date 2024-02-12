#include <stdio.h>

int main(){

    int i,j,m,n,max;

    int arr[30][30];

    printf("Enter the number of rows:");
    scanf("%d", &m);
    printf("Enter the number of cols:");
    scanf("%d", &n);

    printf("Enter the Array Elements:\n");


    for(i=0;i<m;i++){
        for(j=0; j<n;j++){

            scanf("%d", &arr[i][j]);
        }
    }

    printf("The Entered 2D Array is: \n");
      for(i=0;i<m;i++){
        for(j=0; j<n;j++){

            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    max=arr[0][0];

    for(i=0;i<m;i++){
    for(j=0; j<n;j++){
    if(arr[i][j]>max)
    {
        max=arr[i][j];

    }
    }}

    printf("\nThe largest array Element is %d", max);

    return 0;
}