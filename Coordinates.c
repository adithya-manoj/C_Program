#include <stdio.h>

int main() {
    float x, y;

    printf("Enter the x-coordinate: ");
    scanf("%f", &x);
    printf("Enter the y-coordinate: ");
    scanf("%f", &y);

    if (x > 0 && y > 0)
        printf("The point (%.2f, %.2f) lies in the First Quadrant.\n", x, y);
    else if (x < 0 && y > 0)
        printf("The point (%.2f, %.2f) lies in the Second Quadrant.\n", x, y);
    else if (x < 0 && y < 0)
        printf("The point (%.2f, %.2f) lies in the Third Quadrant.\n", x, y);
    else if (x > 0 && y < 0)
        printf("The point (%.2f, %.2f) lies in the Fourth Quadrant.\n", x, y);
    else if (x == 0 && y == 0)
        printf("The point (%.2f, %.2f) lies at the origin.\n", x, y);
    else if (x == 0)
        printf("The point (%.2f, %.2f) lies on the y-axis.\n", x, y);
    else
        printf("The point (%.2f, %.2f) lies on the x-axis.\n", x, y);

    return 0;
}
