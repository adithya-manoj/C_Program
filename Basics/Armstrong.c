#include <stdio.h>
int main() {
    int dig,num,sum=0,arm;



    

   
    for(dig=0;dig<=1000;dig++){
        arm=num;
    while(num!=0)
    {
    dig=num%10;
    sum+=dig*dig*dig;
    num=num/10;
    }
    }

    if(arm==sum){
    printf("Armstrong Number from 1 - 1000 are %d ", arm);
    }
   
    return 0;
    }