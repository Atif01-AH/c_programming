#include<stdio.h>
int main(){
  int a,b,c;
  printf("Enter the number a: ");
  scanf("%d",&a);
  printf("Enter the number b: ");
  scanf("%d",&b);
  printf("Enter the number c: ");
  scanf("%d",&c);

  if(a>b){
    printf("a is largest number ");
  }
  if(a==b==c){
    printf("both are equal");
  }
  if(b>c){
    printf("c is samll number");
  }
  else{
    printf("invalid");
  }





}
