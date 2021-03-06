#include <stdio.h>

int main() {
    int numberOfPassengers = 0;
    double costOfGas = 0.0;

    scanf("%d %lf", &numberOfPassengers, &costOfGas);

    if (numberOfPassengers) {
        printf("%.2lf\n", (costOfGas + 1) / (numberOfPassengers + 1));
    } else {
        printf("%.2lf\n", costOfGas);
    }
    return 0;
}
