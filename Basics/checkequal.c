#include<stdio.h>

int main()
{
    int a, b;
    char ans;
    do{
    
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if(a == b)
    {
    printf("Equal\n");
    }
    else
    printf("Not Equal\n");

    
    printf("Do you want to check another?[Y/N]");
    scanf(" %c", &ans);
    }
    while(ans == 'Y' || ans == 'y');

    return 0;
}