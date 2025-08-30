#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, perimeter, area;

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the perimeter and area
    perimeter = 2 * PI * radius;
    area = PI * radius * radius;

    // Print the results
    printf("Perimeter (Circumference) of the circle: %.2f\n", perimeter);
    printf("Area of the circle: %.2f\n", area);

}
