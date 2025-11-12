#include <stdio.h>
int main (){
    int month;
    printf("Enter a Month number between 1 and 12 : ");
    scanf("%d",&month);
    if (month==1){
        printf("January has 31 days");
    }
    else if (month==2){
        printf("February has 28 or 29 days(for leap year)");
    }
     else if (month==3){
        printf("March has 31 days");
    }
     else if (month==4){
        printf("April has 30 days");
    }
     else if (month==5){
        printf("May has 31 days");
    }
     else if (month==6){
        printf("June has 30 days");
    }
     else if (month==7){
        printf("July has 31 days");
    }
     else if (month==8){
        printf("August has 31 days");
    }
     else if (month==9){
        printf("September has 30 days");
    }
     else if (month==10){
        printf("October has 31 days");
    }
     else if (month==11){
        printf("November has 30 days");
    }
    else {
        printf("December has 31 days");
    }
    return 0;
}
