#include<stdio.h>

int main()
{
    int a;
    char ans;
    
    
    printf("Enter the number: ");
    scanf("%d", &a);
    

    if(a%2 == 0)
    {
        printf("Even");
    }
    else{
        printf("Odd");
    }
    

    return 0;
}