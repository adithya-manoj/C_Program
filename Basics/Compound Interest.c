#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, interest;

    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &r);

    printf("Enter time in years: ");
    scanf("%f", &t);

    interest = p * (pow((1 + r / 100), t)) - p;

    printf("Compound Interest = %.2f\n", interest);

    return 0;
}
