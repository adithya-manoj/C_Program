#include<stdio.h>

int main()
{
    int num,rev=0,dig,pal;
    
    
    printf("Enter the number: ");
    scanf("%d", &num);

    pal=num;

while(num!=0){

    dig = num%10;
    rev = rev*10 + dig;
    num=num/10;
}

if (rev==pal){
    printf("Palindrome");
}
else{
    printf("Not a Palindrome");
}


return 0;
}