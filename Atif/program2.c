#include<stdio.h>
int main(){
    float radius,volume;
    const pi=3.14;
    printf("enter the value of radius");
    scanf("%f",&radius);
    volume=(4*pi*radius*radius*radius);

    printf("%f",volume);
}



