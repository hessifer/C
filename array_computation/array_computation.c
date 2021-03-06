/*
You plan to make a delicious meal and want to take the money you need to buy
the ingredients. Fortunately you know in advance the price per pound of each
ingredient as well as the exact amount you need. The program should read in 
the number of ingredients (up to a maximum of 10 ingredients), then for 
each ingredient the price per pound. Finally your program should read the 
weight necessary for the recipe (for each ingredient in the same order). 
Your program should calculate the total cost of these purchases, 
then display it with 6 decimal places.
*/

#include <stdio.h>

int main() {
    int numberOfIngredients = 0;
    double pricePerPound[10];
    double weightRequired[10];
    double totalCost = 0.0;

    
    // get number of ingredients
    scanf("%d", &numberOfIngredients);
    while (numberOfIngredients < 1 || numberOfIngredients > 10)  {
        printf("ERROR: Please enter a number between 1 and 10.\n");
        scanf("%d", &numberOfIngredients);
    }

    // get price per pound for each ingredient
    for (int i = 0; i < numberOfIngredients; i++) {
        scanf("%lf", &pricePerPound[i]);
    }
    
    // get weight needed for each ingredient
    for (int i = 0; i < numberOfIngredients; i++) {
        scanf("%lf", &weightRequired[i]);
    }

    // calculate total cost of ingredients needed
    for (int i = 0; i < numberOfIngredients; i++) {
        totalCost = totalCost + (weightRequired[i] * pricePerPound[i]);
    }

    // display total cost
    printf("$%.6lf\n", totalCost);

    return 0;
}
