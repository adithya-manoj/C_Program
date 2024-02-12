#include <stdio.h>

int main() {
    int num, digit, sum, arm;

    printf("Armstrong Numbers from 1 to 1000:\n");
    for (num = 1; num <= 1000; num++) {
        arm = num;
        sum = 0;
        
        while (arm != 0) {
            digit = arm % 10;
            sum += digit * digit * digit;
            arm /= 10;
        }
        
        if (sum == num) {
            printf("%d ", num);
        }
    }

    return 0;
}
