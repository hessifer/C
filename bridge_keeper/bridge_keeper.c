#include <stdio.h>
#define SPECIAL_TAX_FEE 36
#define SPECIAL_TAX_LIMIT 10

int main() {
    int dieOne = 0;
    int dieTwo = 0;
    int sum = 0;

    scanf("%d", &dieOne);
    scanf("%d", &dieTwo);
    sum = dieOne + dieTwo;
 
    if (sum >= SPECIAL_TAX_LIMIT) {
        printf("Special tax\n");
        printf("%d\n", SPECIAL_TAX_FEE);
    } else {
        printf("Regular tax\n");
        printf("%d\n", sum * 2);
    }
    return 0;
 }
