#include <stdio.h>

int main() {
    int numThreeDigitNumbers = 0;
    int redValue = 0;
    int greenValue = 0;
    int yellowValue = 0;
    int i = 0;
    int sum = 0;
    int number = 0;
    double average = 0.0;

    // get number of three digit numbers to process
    scanf("%d", &numThreeDigitNumbers);

    // loop until we have correct number of three digit numbers
    for (i=1; i <= numThreeDigitNumbers; i++) {
        scanf("%d %d %d", &redValue, &yellowValue, &greenValue);
	number = (greenValue * 100 + yellowValue * 10 + redValue * 1);
        sum = sum + number;
	average = (double) sum / i;
	printf("%d. you rolled: %d, current average: %.1lf\n", i, number, average);
    }

    return 0;
}
