#include <stdio.h>
#define freeAge 60
#define noCost 0
#define underTenCost 5
#define chargedAsAdult 10 
#define heavyLuggageFee 10
#define luggageAcceptableWeight 20
#define defaultCost 30

int main() {
    int customerAge = 0;
    int luggageWeight = 0;

    scanf("%d", &customerAge);
    scanf("%d", &luggageWeight);

    /* room cost nothing if you are 60 years old
     * 5 dollars if you are less than 10 years old
     * everyone else is 30 dollars plus additional 10 if you
     * have more than 20 lbs of luggage.
     */

    if (customerAge == freeAge) {
        printf("%d\n", noCost);
    } else if (customerAge < chargedAsAdult) {
	printf("%d\n", underTenCost);
    } else {
        if (luggageWeight > luggageAcceptableWeight) {
	    printf("%d\n", defaultCost + heavyLuggageFee);
	} else {
	    printf("%d\n", defaultCost);
	}
    }
    return 0;
}
