#include <stdio.h>
int main (){
    int Day;
    printf("Enter a Day Number between 1 and 7 : ");
    scanf("%d",&Day);
    if (Day==1){
        printf("Sunday");
    }
    else if (Day==2){
        printf("Monday");
    }
    else if (Day==3){
        printf("Tuesday");
    }
    else if (Day==4){
        printf("Wednesday");
    }
    else if (Day==5){
        printf("Thursday");
    }
    else if (Day==6){
        printf("Friday");
    }
    else if (Day==7){
        printf("Saturday");
    }
    else {
        printf("Invalid day number Enter between 1 and 7");
    }
    return 0;
}
