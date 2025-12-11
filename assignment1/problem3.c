#include <stdio.h>
int main(){
    float kilometres,meters,feet,inches,centimetres;
    printf("Enter the distance between two cities in kilometres:");
    scanf("%f",&kilometres);
    //converts kilometres to meters
    meters = kilometres * 1000;
    //converts meters to feet
    feet = meters*3.28084;
    //converts feet to inches
    inches = feet*12;
    //converts kilometres to centimetres
    centimetres = kilometres * 100000;
    printf("distance in meter %f\n",meters);
    printf("distance in feet %f\n",feet);
    printf("distance in inches %f\n",inches);
    printf("distance in centimetres %f\n",centimetres);
    return 0;
}
