#include <stdio.h>
int main(){
    float radius,area,perimeter;
    float pi=3.14159;
    printf("Enter radius:");
    scanf("%f",&radius);
    perimeter = 2*pi*radius;
    printf("perimeter of circle= %2f\n",perimeter);
    area = pi*radius*radius;
    printf("Area of circle= %f",area);
    return 0;
}
