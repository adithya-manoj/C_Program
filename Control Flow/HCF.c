#include <stdio.h>
int main() 
{
    int num1, num2,gcd,i;

    printf("Enter the number 1:");
    scanf("%d", &num1);

    printf("Enter the number 2:");
    scanf("%d", &num2);

    for(i=1; i<=num1 && i<=num2; i++){
        if(num1 % i == 0 && num2 % i == 0){
        gcd = i;
        }
    } 
    printf( " The HCF of two numbers %d and %d is %d. ", num1, num2, gcd ); 
    return 0;
}
