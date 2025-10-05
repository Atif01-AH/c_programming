#include <stdio.h>
int main(){
    float centigrade,fahrenheit;
    printf("Enter the temperature in centigrdade:");
    scanf("%f",&centigrade);
    fahrenheit = (9*centigrade)/5+32;
    printf("Temperature in fahrenheit %f",fahrenheit);
    return 0;
}
