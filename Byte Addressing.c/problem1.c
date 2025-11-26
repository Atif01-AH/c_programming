#include <stdio.h>
int main(){
    int a;
    a=8;
    int*p;
    p=&a;
    printf("%d\n",a);
    printf("%p",p);
    return 0;
}
