#include <stdio.h>

int main() {
    float num1, num2, product;

    printf("Enter the first floating-point number: ");
    scanf("%f", &num1);

    printf("Enter the second floating-point number: ");
    scanf("%f", &num2);

    product = num1 * num2;

    printf("Product = %.2f\n", product);

    return 0;
}
