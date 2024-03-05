#include<stdio.h>

int is_prime(int num){
    for(int i=2;i*i<=num;i++){
        if(num%i==0)
            return 0;
    }
    return 1;
}

int main() {
    int num, start, end;
    
    printf("Enter the Starting number: ");
    scanf("%d", &start);
    printf("Enter the Ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for(num=start; num<=end; num++) {
        if(is_prime(num)) {
            printf("%d ", num);
        }
    }

    return 0;
}
