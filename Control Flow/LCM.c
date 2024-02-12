#include <stdio.h>
int main() 
{
    int num1, num2,lcm,i,max, flag=1;

    printf("Enter the number 1:");
    scanf("%d", &num1);

    printf("Enter the number 2:");
    scanf("%d", &num2);
    
    max=(num1>num2)? num1 : num2;
    while(flag){
        if(max%num1==0 && max%num2==0){
            lcm=max;
            flag=0;
            break;
        }
        max++;
    }
     
    printf(" The LCM of two numbers %d and %d is %d. ", num1, num2, lcm ); 

    return 0;
}
