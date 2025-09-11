#include<stdio.h>
int main(){
    int hour;
    int minute;
    int total;

    printf("enter the value of hour");
    scanf("%d ,&hour");

    printf("enter the value of minute");
    scanf("%d ,&minute");

    total=(hour*60+minute);
    printf("%d" ,total);

}
