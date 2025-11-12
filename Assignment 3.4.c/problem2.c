#include <stdio.h>
int main(){
    int Digit;
    printf("Enter a digit a between 0 and 9 : ");
    scanf("%d",&Digit);
    if (Digit==0){
        printf("Zero");
    }
    else if (Digit==1){
        printf("One");
    }
     else if (Digit==2){
        printf("Two");
    }
     else if (Digit==3){
        printf("Three");
    }
     else if (Digit==4){
        printf("Four");
    }
     else if (Digit==5){
        printf("Five");
    }
     else if (Digit==6){
        printf("Six");
    }
     else if (Digit==7){
        printf("Seven");
    }
     else if (Digit==8){
        printf("Eight");
    }
     else if (Digit==9){
        printf("Nine");
    }
    else {
        printf("Invalid Digit");
    }
    return 0;
}
