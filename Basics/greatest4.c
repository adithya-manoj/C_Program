#include <stdio.h>

void max_of_four(int a, int b, int c, int d)
    {
       if (a>b && a>c && a>d)
       {
           printf("%d", a);
       }
        
        else if (b>a && b>c && b>d) {
            printf("%d", b);
        }
        
        else if (c>a && c>b && c>d) {
            printf("%d", c);
        }
        
        else if (d>a && d>b && d>c) {
            printf("%d", d);
        }
    }
    

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    max_of_four(a, b, c, d);
    
    
    return 0;
}