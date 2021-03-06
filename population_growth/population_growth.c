#include <stdio.h>

int main() {
    int currentPopulation = 0;
    double expectedGrowthPercentage = 0.0;

    // get current population from input
    scanf("%d", &currentPopulation);
    
    // get expected growth percentage from input
    scanf("%lf", &expectedGrowthPercentage);

    // calculate projected population in a year
    printf("%d\n", (int) (currentPopulation * (1 + expectedGrowthPercentage / 100)));
    return 0;
}
