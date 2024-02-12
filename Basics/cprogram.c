#include<stdio.h>
    
int main(){

    int n,i, target, arr[50];
    int count=0;
    printf("Enter the size of array:");
    scanf("%d", &n);
    

    printf("Enter the elements into array:");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the Target:");
    scanf("%d", &target);
    
    for(i=0; i<n; i++){
    printf("%d ", arr[i]);
    }

    for(i=0;i<n; i++){
        
        for (j= i; j < n; i++)
        {
            if(arr[i]==arr[j])
            count++;
        }

        
        arr[i]
    }

    printf("The Majority Element is %d", arr[]);
}