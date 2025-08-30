#include <stdio.h>

int main() {
    float km;
    float meters, feet, inches, centimetres;

    // Input from the user
    printf("Enter the distance between two cities in kilometres: ");
    scanf("%f", &km);

    // Conversions
    meters = km * 1000;
    feet = meters * 3.28084;
    inches = feet * 12;
    centimetres = km * 100000;

    // Output the results
    printf("\nDistance in different units:\n");
    printf("Meters: %.2f\n", meters);
    printf("Feet: %.2f\n", feet);
    printf("Inches: %.2f\n", inches);
    printf("Centimetres: %.2f\n", centimetres);

    return 0;
}

