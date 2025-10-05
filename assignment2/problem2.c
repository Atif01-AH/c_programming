#include <stdio.h>
int main(){
    float radius,volume;
    float pi=3.14159;
    printf("Enter the radius of sphere:");
    scanf("%f",&radius);
    volume = (4*pi*radius*radius*radius)/3;
    printf("volume of a sphere= %f",volume);
    return 0;
}
