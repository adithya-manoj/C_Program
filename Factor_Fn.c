#include <stdio.h>

int factor(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ", i);
        }
    }
}

int main() 
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    printf("Numbers are: ");
    factor(num);
return 0;
}