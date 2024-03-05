#include <stdio.h>

int fibonacciSum(int n) {
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    int sum = fib[0] + fib[1];
    for (int i = 2; i <= n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
        if (i % 2 == 0) {
            sum += fib[i];
        }
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int sum = fibonacciSum(n);
    printf("Sum of Fibonacci numbers at even indexes up to %d terms: %d\n", n, sum);
    return 0;
}
