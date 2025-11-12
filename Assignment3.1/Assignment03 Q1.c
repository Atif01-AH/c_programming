#include<stdio.h>
int main(){
  int year;
  printf("Enter the year: ");
  scanf("%d",&year);
  if(year%4==0){
    printf("it is leap year");
  /*}
  else if(year%100 && year%400){
    printf("it is also leap year");
  }*/
  }else{
    printf("it is not leap year");
  }

}
