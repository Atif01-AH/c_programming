#include <stdio.h>
int main(){
    int a;
    int*p;
    p=&a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    printf("%p",&p);
    return 0;
}
