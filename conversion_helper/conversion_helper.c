#include <stdio.h>

int main(void)
{
    int numberOfConversions = 0;
    double toConvert = 0.0;
    char measurement = 'q';

    double metersToFeet(double);
    double gramsToPounds(double);
    double celsiusToFahr(double);

    // capture number of conversions to make
    scanf("%d", &numberOfConversions);

    // process metric conversion
    for (int i=0; i<numberOfConversions; i++)
    {
        scanf("%lf %c", &toConvert, &measurement); 

	if (measurement == 'm')
	{
            printf("%.6lf ft\n", metersToFeet(toConvert));
	} 
	else if (measurement == 'g')
	{
            printf("%.6lf lbs\n", gramsToPounds(toConvert));
	}
	else if (measurement == 'c')
	{
            printf("%.6lf f\n", celsiusToFahr(toConvert));
	}
        else
	{
            printf("ERROR: Please enter a valid option.\n");
	}	
    }
    return 0;
}

double metersToFeet(double meters)
{
    // 1 meter = 3.2808 feet
    return meters * 3.2808;
}

double gramsToPounds(double grams)
{
    // 1 gram = 0.002205 pounds
    return grams * 0.002205;
}

double celsiusToFahr(double celsius)
{
    // Fahrenheit = 32 + 1.8 * celsius
    return 32 + (1.8 * celsius);
}
