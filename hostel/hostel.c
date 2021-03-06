#include <stdio.h>
#define BASE_COST 10
#define INCREMENT_COST 5
#define MAX_COST 53

int main() {
    int hoursPastNoon = 0;
    int totalCost = 0;

    scanf("%d", &hoursPastNoon);
    totalCost = BASE_COST + (hoursPastNoon * INCREMENT_COST); 
    
    if (totalCost > MAX_COST) {
        printf("%d\n", MAX_COST);
    } else {
        printf("%d\n", totalCost);
    }
    return 0;
}
