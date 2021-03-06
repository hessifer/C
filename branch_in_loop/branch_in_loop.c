/*
You want to determine the number of cities in a given region that have a 
population strictly greater than 10,000. To do this, you write a program
that first reads the number of cities in a region as an integer, and then
the populations for each city one by one (also integers).
*/

#include <stdio.h>

int main()
{
    int numberOfCities = 0;
    int citiesLargerThanTenThousand = 0;
    int cityPopulation = 0;

    scanf("%d", &numberOfCities);

    for (int i = 0; i < numberOfCities; i++)
    {
	scanf("%d", &cityPopulation);
        if (cityPopulation > 10000)
        {
            citiesLargerThanTenThousand = citiesLargerThanTenThousand + 1;        
        } 
    }
    printf("%d\n", citiesLargerThanTenThousand);

    return 0;
}

