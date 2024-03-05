#include <stdio.h> 
  
int Check_Neon_Number(int num) { 
  
    int square = num * num; 
    int n = square; 
    int digit, sum = 0; 
  
    while (n != 0) { 
  
        digit = n % 10; 
        sum = sum + digit; 
        n = n / 10; 
    } 
  
    if (sum == num) 
        return 1;
    else
        return 0;
} 

int main() 
{ 
    int num;
    printf("Enter the Number:");
    scanf("%d", &num);
     
    int ans = Check_Neon_Number(num); 
    if (ans == 1) 
  
          printf("It's a Neon Number"); 
    else
  
        printf("It's not a Neon Number"); 
    return 0; 
}