#include <stdio.h>

int main() {
    double amountMoney = 0.0;
    double pricePerBook = 0.0;
    
    // get amount of money
    scanf("%lf", &amountMoney);
    
    // get price per book
    scanf("%lf", &pricePerBook);
    
    printf("%d\n", (int) (amountMoney / pricePerBook));
    return 0;
}
