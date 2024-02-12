#include <stdio.h>

int main() {
    int height_cm;

    printf("Enter the height in centimeters: ");
    scanf("%d", &height_cm);

    if (height_cm < 150) {
        printf("The person is Short.\n");
    } else if (height_cm >= 150 && height_cm < 180) {
        
        printf("The person is Average.\n");
    } else {
        printf("The person is Tall.\n");
    }

    return 0;
}
