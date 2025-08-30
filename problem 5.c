#include <stdio.h>

int main() {
    float totalSellingPrice, totalProfit, totalCostPrice, costPricePerItem;

    // Input: Total Selling Price and Total Profit
    printf("Enter the total selling price of 15 items: ");
    scanf("%f", &totalSellingPrice);

    printf("Enter the total profit earned on 15 items: ");
    scanf("%f", &totalProfit);

    // Calculate total cost price
    totalCostPrice = totalSellingPrice - totalProfit;

    // Calculate cost price of one item
    costPricePerItem = totalCostPrice / 15;

    // Output the result
    printf("\nCost price of one item = %.2f\n", costPricePerItem);

    return 0;
}

