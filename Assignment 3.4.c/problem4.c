#include <stdio.h>
int main (){
    int choice;
    float area,length,width,base,radius,height,PI=3.14;
    printf("Menu:\n");
    printf("1. Area of circle\n");
    printf("2. Area of rectangle\n");
    printf("3. Area of triangle\n");
    printf("Select an option from menu : ");
    scanf("%d",&choice);
    if (choice==1){
        printf("Enter a radius of circle : ");
        scanf("%f",&radius);
        area = PI*radius*radius;
        printf("Area of circle is : %f",area);
    }
    else if (choice==2){
        printf("Enter the length and width of the rectanle : ");
        scanf("%f %f",&length,&width);
        area = length*width;
        printf("Area of rectangle is : %f",area);
    }
    else if(choice==3){
        printf("Enter the base and height of the triangle : ");
        scanf("%f %f",&base,&height);
        area = 0.5*base*height;
        printf("Area of rectangle is : %f",area);
    }
    else {
        printf("Invalid option");
    }
    return 0;
}
