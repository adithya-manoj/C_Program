#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter the Number of Rows ");
    scanf("%d", &n);

    for(i=0;i<n;i++){

        for(j=0;j<n-i;j++){
            printf(" ");

        }
        printf("*");
        

        for (j = 0; j < 2*i; j++) {
            printf(" ");}
            printf("*");     
            printf("\n");
               
        }
        
        
        
        
}