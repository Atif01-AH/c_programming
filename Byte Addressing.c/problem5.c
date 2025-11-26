#include <stdio.h>
int main(){
    char ch;
    char*p;
    p=&ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    *p=*p+1;
    printf("After : %c",*p);
    return 0;
}
