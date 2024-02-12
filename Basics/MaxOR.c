#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k) {
  
  for(int i=1;i<=n; i++)
  for(int j=i+1; j<=n; j++){
      
      int and = i&j;
      printf("%d\n", and);
      int or = i|j;
      printf("%d\n", or);
      int xor = i^j;
      printf("%d\n", xor);
  }
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}