#include <stdio.h>

int main(void) {
    const double MILES_IN_KILOMETER = 0.621371;
    double kilometers = 0.0;
    
    scanf("%lf", &kilometers);
    printf("%lf\n", kilometers * MILES_IN_KILOMETER);
    
    return 0;
}
