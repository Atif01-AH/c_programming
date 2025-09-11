#include<stdio.h>
int main (){
    //declartation a integer variable
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    //taking input in variable a
    printf("enter first value: ");
    scanf("%d",&a);
    printf("enter second value");
    scanf("%d",&b);
    c=a-b;
    d=a/b;
    e=a*b;
    f=a+b;
    //printing value of a
    printf("\nsubtract=");
    printf("%d",c);
    printf("\ndivide=");
    printf("%d",d);
    printf("\nproduct=");
    printf("%d",e);
    printf("\nsum=");
    printf("%d",f);
}
