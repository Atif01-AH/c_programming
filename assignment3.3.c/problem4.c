#include <stdio.h>
int main(){
    int customerID;
    char name;
    float units,ChargePerUnit,totalbill;
    printf("Enter Customer ID : ");
    scanf("%d",&customerID);
    printf("Enter Customer Name : ");
    scanf(" %c",&name);
    printf("Enter Total Units Consumed : ");
    scanf("%f",&units);
    if (units<=199){
        ChargePerUnit=1.20;
    }
    else if (units>=200 && units<=399){
        ChargePerUnit=1.50;
    }
    else if (units>=400 && units<=599){
        ChargePerUnit=1.80;
    }
    else {
        ChargePerUnit=2.00;
    }
    totalbill=units+ChargePerUnit;
    // Customer Details :
    printf("Customer ID: %d\n",customerID);
    printf("Name: %c\n",name);
    printf("Units Consumed: %f\n",units);
    printf("Total Bill: %2f\n",totalbill);

    return 0;
}
