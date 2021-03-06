#include <stdio.h>

int main(void) {
    int robotToDeploy = 0;
    int height = 0;
    int weight = 0;
    int power = 0;
    int resistanceRating = 0;
    int i = 0;
    int sumOfPower = 0;
    
    scanf("%d", &robotToDeploy);
    for (i=0; i<robotToDeploy; i++) {
        scanf("%d%d%d%d", &height, &weight, &power, &resistanceRating);
        sumOfPower = sumOfPower + ((power + resistanceRating) * (weight - height));
    }
    printf("%d\n", sumOfPower);
    
    return 0;
}
