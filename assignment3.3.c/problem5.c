#include <stdio.h>
int main(){
    char grade;
    printf("Enter a Grade : ");
    scanf("%c",&grade);
    if (grade=='E' || grade=='e'){
        printf("Excellent");
    }
    else if (grade=='V' || grade=='v'){
        printf("Very Good");
    }
    else if (grade=='G' || grade=='g'){
        printf("Good");
    }
    else if (grade=='A' || grade=='a'){
        printf("Average");
    }
    else {
        printf("Fail");
    }
    return 0;
}
