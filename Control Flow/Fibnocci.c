#include <stdio.h>
int main() 
{
    int fib, num;

int n1=0,n2=1,n3=0;
printf("Enter the number for printing fibanocci series:");
scanf("%d", &num);
printf("The Fibonacci series until %d is ", num );

while (n3<=num)
{
    printf("%d ", n3);
    
    n1=n2;
    n2=n3;
    n3=n1+n2;
    
} 


return 0;
}
