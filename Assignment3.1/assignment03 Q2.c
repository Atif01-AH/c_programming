#include<stdio.h>
int main(){
 int n,m;
 printf("Enter the number: ");
 scanf("%d",&n);

 if(m>0){
   n = 1;
 }
 else if(m==0){
        n = 0;
 }
 else if(m<0){
    n = -1;
 }
 else {
    printf("invalid");
 }
printf("Value of n = %d",n);
 return 0;

}
