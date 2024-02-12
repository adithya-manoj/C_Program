#include <stdio.h>

int main()
{
    int i,n=5;

    for(i=0;i<n;i++){
    for(i=0;i<n-i;i++){
        printf(" ");

    }
    for(i=0;i<n;i++){
        printf("*");
    }}
}