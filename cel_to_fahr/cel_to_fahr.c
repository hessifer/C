#include <stdio.h>

int main(void) {
  // Temperature (°F) = Temperature (°C) × 9.0 / 5.0 + 32.0
     double tempCel = 0.0;

     scanf("%lf", &tempCel);
     printf("%.1lf\n", (tempCel * 9.0) / 5.0 + 32.0);
                     
     return 0;
}
