#include<stdio.h>

int main()
{
    int a;
    char ans;
    
    
    printf("Enter Age: ");
    scanf("%d", &a);
    

    if(a>=18)
    {
        printf("Eligible to Vote");
    }
    else{
        printf("Not Eligible");
    }
    

    return 0;
}