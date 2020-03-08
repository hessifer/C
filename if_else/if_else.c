#include <stdio.h>

int main() {
    int temp_in_far;
    int hotDay;

    printf("Please enter the temperature in fahrenheit: ");
    scanf("%d", &temp_in_far);

    if (temp_in_far > 80)
        hotDay = 1; 
    else
        hotDay = 0;

    // short-cut for single statement if/else
    hotDay = (temp_in_far > 80) ? 1 : 0;

    if (hotDay)
        printf("It is hot outside.\n");

    return 0;
}
