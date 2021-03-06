#include <stdio.h>
#define COST_BAG_CEMENT 45
#define LBS_PER_BAG_CEMENT 120.0

int main() {
    double lbsCementNeeded = 0.0;
    double numBags = 0.0;
    int iNumBags = 0;

    // get lbs of cement needed
    scanf("%lf", &lbsCementNeeded);

    // calculate number of bags needed
    numBags = lbsCementNeeded / LBS_PER_BAG_CEMENT;
    iNumBags = (int) (lbsCementNeeded / LBS_PER_BAG_CEMENT);

    if (numBags == iNumBags) {
	    printf("%d\n", iNumBags * COST_BAG_CEMENT);
    } else {
	    printf("%d\n", (iNumBags + 1) * COST_BAG_CEMENT);
    }
    return 0;
}

     
