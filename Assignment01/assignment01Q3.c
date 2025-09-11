#include<stdio.h>
int main(){
  float km,m,feet,inches,cm;
  printf("Enter the distance between two cities(in km): ");
  scanf("%f",&km);
  m=km*1000;
  feet=m*3.28084;
  inches=feet*12;
  cm=km*100000;

  printf("%f",m);
  printf("%f",feet);
  printf("%f",inches);
  printf("%f",cm);



}
