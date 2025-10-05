#include <stdio.h>
int main(){
    int m;
    int n;
    printf("Enter the integer value of : ");
    scanf("%d",&m);
    if(m>0){
        n=1;
    }
    else if (m==0){
        n=0;
    }
    else{
        n=-1;
    }
    printf("The value of n is: %d\n", n);
    return 0;
}
