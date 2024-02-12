#include <stdio.h>

int main()
{
int i,j, n=7;

for(i=0;i<=2*n;i++){


printf("*");
}
printf("\n");

for(i=0;i<n;i++){
    for(j=0;j<i;j++){
    printf(" ");
    }

    for(j=0;j<=2*(n-i)-3;j++)
    {
        if(j==1 || j==2*(n-i)-3){
            printf("*");
        }
        else {
            printf(" ");
        }
        
    }

    
    printf("\n");
}

}