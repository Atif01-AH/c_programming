#include<stdio.h>
int main(){
  int a,b,c;
  printf("Enter the number a: ");
  scanf("%d",&a);
  printf("Enter the number b: ");
  scanf("%d",&b);
  printf("Enter the number c: ");
  scanf("%d",&c);

  if(a>b && a>c){
    printf("a is largest number ");
  }
  if(b>c && b>a){
    printf("b is largest");
  }
  if(c>a && c>b){
    printf("c is largest");
  }
  else{
    printf("invalid");
  }
  return 0;
}
