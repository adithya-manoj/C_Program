#include <stdio.h>

int main() {
    int physics, chemistry, mathematics, total_marks, total_math_physics;

    // Input marks obtained in Physics, Chemistry, Mathematics
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &physics);

    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chemistry);

    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &mathematics);

    // Input total marks of Maths, Physics, and Chemistry
    printf("Total marks of Maths, Physics, and Chemistry: ");
    scanf("%d", &total_marks);

    // Input total marks of Maths and Physics
    printf("Total marks of Maths and Physics: ");
    scanf("%d", &total_math_physics);

    // Check eligibility criteria
    if (physics >= 55 && chemistry >= 50 && mathematics >= 65 && total_marks >= 190) {
        printf("The candidate is eligible.\n");
    } else if (total_math_physics >= 140) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}
