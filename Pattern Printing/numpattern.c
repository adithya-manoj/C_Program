#include <stdio.h>

int main(){

int i,j,n;
printf("Enter the number of rows: ");
    scanf("%d", &n);
int num=1;
for(i=0;i<n;i++){
for(j=0; j<i; j++){
    printf("%d ", num);
    num++;

}
printf("\n");
}
}