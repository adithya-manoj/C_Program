#include <stdio.h>

void is_prime(int num) {
    int i, flag = 0;

    if (num == 1 || num == 0) {
        flag = 1;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }
    
    if (flag == 0) {
        printf("Number is Prime\n");
    } else {
        printf("Number is Not Prime\n");
    }
}

int main() {
    int num;

    printf("Enter the Number: ");
    scanf("%d", &num);

    is_prime(num);

    return 0;
}
