#include <stdio.h>
int main(){
    float a;
    float*p;
    p=&a;


    printf("Size of the variable = %zu bytes\n",sizeof(a));
    printf("Size of the pointer = %zu bytes",sizeof(p));

    return 0;
}

