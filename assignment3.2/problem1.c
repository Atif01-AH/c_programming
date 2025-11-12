#include <stdio.h>
#include <math.h>
int main(){
       float a,b,c,Discriminant,root1,root2,realroots,imaginaryroots;
       printf("Enter coefficient a : ");
       scanf("%f",&a);
       printf("Enter coefficient b : ");
       scanf("%f",&b);
       printf("Enter coefficient c : ");
       scanf("%f",&c);
       Discriminant=b*b-4*a*c;

       if(Discriminant>0){

          root1=(-b+ sqrt(Discriminant))/(2*a);
          root2=(-b- sqrt(Discriminant))/(2*a);

        printf("two real and distinct roots : %f\n %f",root1,root2);

       }

       else if(Discriminant==0){

            root1=root2=-b/(2*a);

        printf("two real and equal roots : %f",root1);
       }

       else{
            realroots=-b/(2*a);

            imaginaryroots= sqrt(-Discriminant)/(2*a);

        printf("roots are imaginary and complex : %f",imaginaryroots);


       }
       return 0;
}
