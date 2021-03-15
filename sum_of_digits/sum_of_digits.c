#include <stdio.h>

int sumOfDigits(int);

int main(void)
{
    int digits = 0;
    scanf("%d", &digits);

    printf("%d\n", sumOfDigits(digits));

    return 0;
}

int sumOfDigits(int number)
{
    // check if single digit number
    if (number < 10)
    {
        return number;
    }
    else
    {
	// isolate right most number by using % 10
	// use integer division to remove last digit and
	// recurse to calculate the sum
        return ((number % 10) + sumOfDigits((number / 10)));
    }
}
