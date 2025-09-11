#include<stdio.h>
int main ()
{

       int m;

printf("enter a number");
scanf("%d",&m);


         if(m>=90){
            printf("grade A");
                      }
                             else if(m<90&& m>=80){
                                 printf("grade B");
                             }
                                     else if(m<80 && m>=70)
                                     {
                                         printf("grade C");

                                                 }
                                     else if(m<70 && m>=60)
                                     {

                                         printf("grade D");

                                     }
    else {
        printf("grade E");
    }


}
