#include <stdio.h>
int main(){
    float totalsellingprice,totalprofit,costpriceofoneitem,totalcostprice;
    int numberofitem = 15;
    printf("Total selling price of 15 item:");
    scanf("%f",&totalsellingprice);
    printf("Total profit on 15 item:");
    scanf("%f",&totalprofit);
    totalcostprice = totalsellingprice-totalprofit;
    printf("Total_costprice= %f\n",totalcostprice);
    costpriceofoneitem = totalcostprice/numberofitem;
    printf("costpriceofoneitem= %f",costpriceofoneitem);
    return 0;
}
