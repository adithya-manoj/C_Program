#include <stdio.h>

int main() {
    int n,rev=0, temp,val;

    printf("Enter the Number ");
    scanf("%d", &n);

    val=n;
    while(n!=0){

    
    temp=n%10;
    rev=rev*10 + temp;
    n=n/10;
    }

    printf("The Reverse of %d is %d ", val, rev);

    return 0;
    }