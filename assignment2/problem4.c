#include <stdio.h>
int main(){
    int total_number_of_minutes,hours,minutes;
    printf("Total number of minutes:");
    scanf("%d",&total_number_of_minutes);
    hours = total_number_of_minutes/60;
    minutes = total_number_of_minutes%60;
    printf("The number of hours is : %d\n",hours);
    printf("The remaining minutes is : %d",minutes);
    return 0;
}
