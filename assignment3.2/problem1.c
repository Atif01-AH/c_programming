#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, Discriminant, root1, root2, realroots, imaginaryroots;

    
    printf("Enter coefficient a: ");
    scanf("%f", &a);
    printf("Enter coefficient b: ");
    scanf("%f", &b);
    printf("Enter coefficient c: ");
    scanf("%f", &c);

   
    Discriminant = b * b - 4 * a * c;

    
    if (Discriminant > 0) {
        root1 = (-b + sqrt(Discriminant)) / (2 * a);
        root2 = (-b - sqrt(Discriminant)) / (2 * a);
        printf("Two real and distinct roots: %.2f and %.2f\n", root1, root2);
    }
    
    else if (Discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Two real and equal roots: %.2f\n", root1);
    }
    
    else {
        realroots = -b / (2 * a);
        imaginaryroots = sqrt(-Discriminant) / (2 * a);
        printf("Roots are imaginary and complex: %.2f + %.2fi and %.2f - %.2fi\n", realroots, imaginaryroots, realroots, imaginaryroots);
    }

    return 0;
}

