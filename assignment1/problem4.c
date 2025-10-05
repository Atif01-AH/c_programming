#include <stdio.h>
int main(){
    int subject1;
    int subject2;
    int subject3;
    int subject4;
    int subject5;
    int aggregate_marks;
    float percentage;
    printf("Enter the marks for subject 1:");
    scanf("%d",&subject1);
    printf("Enter the marks for subject 2:");
    scanf("%d",&subject2);
    printf("Enter the marks for subject 3:");
    scanf("%d",&subject3);
    printf("Enter the marks for subject 4:");
    scanf("%d",&subject4);
    printf("Enter the marks for subject 5:");
    scanf("%d",&subject5);
    aggregate_marks = subject1+subject2+subject3+subject4+subject5;
    printf("Aggregate marks= %d\n",aggregate_marks);
    percentage = (float)aggregate_marks/500*100;
    printf("percentage %f",percentage);
    return 0;

}
