#include <stdio.h>

int gcd(int num1, int num2){

        if(num2==0){
            return num1;
        }
        else{
            return gcd(num2, num1 % num2);
        }
    } 
int main() 
{
    int num1, num2,i;

    printf("Enter the number 1:");
    scanf("%d", &num1);

    printf("Enter the number 2:");
    scanf("%d", &num2);

   
    printf( " The HCF of two numbers is %d. ", gcd(num1, num2)); 
    return 0;
}
