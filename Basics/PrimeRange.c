#include <stdio.h>
#include <stdbool.h>

// Function prototype
bool isPrime(int num);

int main() {
    int start, end;

    // Input range from the user
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    // Iterate through the range and check for prime numbers
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    // Check for factors from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // Not a prime number
        }
    }

    return true; // Prime number
}
