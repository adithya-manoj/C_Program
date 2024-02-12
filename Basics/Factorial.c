#include <stdio.h>

int main(){

    int i,num,fact=1;
    printf("Enter the Number: ");
    scanf("%d", &num);

    for(i=1;i<=num;i++){
        fact*=  i;
    }

    printf("%d", fact);
    return 0;
}