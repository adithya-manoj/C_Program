#include <stdio.h>

int main()
{
    int c,ans,num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    ans=(num*(num+1))/2;
    printf("Sum of the first %d natural numbers is %d", num, ans );
}

