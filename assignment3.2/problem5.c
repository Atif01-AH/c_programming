#include <stdio.h>
int main(){
    int angle1, angle2, angle3, sum_of_all_angles;
    printf("Enter the value of first angle : ");
    scanf("%d",&angle1);
    printf("Enter the value of second angle : ");
    scanf("%d",&angle2);
    printf("Enter the value of third angle : ");
    scanf("%d",&angle3);
    sum_of_all_angles = angle1+angle2+angle3;
    if (sum_of_all_angles<=180 && sum_of_all_angles>0){
        printf("Triangle is valid");
    }
    else {
        printf("Triangle is invalid");
    }
    return 0;
}
