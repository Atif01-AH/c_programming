#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the value of x-coordinate : ");
    scanf("%d",&x);
    printf("Enter the value of y-coordinate : ");
    scanf("%d",&y);
     if (x > 0 && y > 0) {
        printf("the points lies in quadrant I");
    }
    else if (x < 0 && y > 0) {
        printf("the points lies in quadrant II");
    }
    else if (x < 0 && y < 0) {
        printf("the points lies in quadrant III");
    }
    else if (x > 0 && y < 0) {
        printf("the points lies in quadrant IV");
    }
    else if (x == 0 && y == 0) {
        printf("the points lies in origin");
    }
    return 0;
}
