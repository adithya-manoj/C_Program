#include <stdio.h>

int main(){

    int i,num1,num2,op,ans;

    
    printf("Enter the Number 1: ");
    scanf("%d", &num1);
    printf("Enter the Number 2: ");
    scanf("%d", &num2);

    
    printf("\n 1. Addition \n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
    printf("Enter the Operation Number:");

    scanf("%d", &op);

    switch (op)
    {
    case 1: ans=num1+num2;
    printf("%d", ans);
        break;
    
    case 2: ans=num1-num2;
    printf("%d", ans);
        break;

    case 3: ans=num1*num2;
    printf("%d", ans);
        break;

    case 4: ans=num1/num2;
    printf("%d", ans);
        break;
    default:
        break;
    }
    
    return 0;
}