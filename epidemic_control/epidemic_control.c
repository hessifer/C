#include <stdio.h>

int main()
{
    int totalPopulation = 0;
    int totalInfected = 1;
    int daysToInfectPopulation = 1;

    scanf("%d", &totalPopulation);

    while (totalInfected < totalPopulation)
    {
        daysToInfectPopulation++;
        totalInfected = totalInfected + (totalInfected * 2);
    }
    printf("%d\n", daysToInfectPopulation);
    return 0;
}
