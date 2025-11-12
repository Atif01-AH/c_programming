#include <stdio.h>
int main (){
    float CostPrice,SellingPrice,Difference;
    printf("Enter the cost price : ");
    scanf("%f",&CostPrice);
    printf("Enter the selling price : ");
    scanf("%f",&SellingPrice);
    Difference = SellingPrice - CostPrice;
    if(SellingPrice>CostPrice){
        printf("Total profit is : %f",Difference);
    }
    if(CostPrice>SellingPrice){
        printf("Total loss is : %f",-Difference);
    }
    if(SellingPrice==CostPrice){
        printf("There is no profit or loss");
    }
    return 0;
}
