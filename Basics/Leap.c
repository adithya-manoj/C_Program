#include<stdio.h>

int main()
{
    int a;
    
    printf("Enter the Year: ");
    scanf("%d", &a);
    

    if(a%4==0)
    {
        printf("Leap Year");
    }
    else{
        printf("Non Leap Year");
    }
    
    return 0;
}