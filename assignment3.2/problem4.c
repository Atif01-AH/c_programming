#include <stdio.h>
int main (){
    float side1, side2, side3;
    printf("Enter the lengths of the three sides of the traingle : \n");
    scanf("%f %f %f" , &side1 , &side2, &side3);
    if (side1==side2 && side2==side3 && side1==side3){
        printf("Equilateral traingle");
    }
    else if (side1==side2 || side2==side3 || side1==side3){
        printf("Isosceles traingle");
    }
    else {
        printf("Scalene triangle");
    }
    return 0;
}
