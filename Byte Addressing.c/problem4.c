#include <stdio.h>
int main(){
    int a;
    a=2;
    int*p;
    p=&a;
    printf("Before update : %d\n",a);
    (*p)++;
    printf("After update : %d",a);
    return 0;
}
