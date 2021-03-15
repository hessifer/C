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
    // calculate sum of all digits using recursion
    else
    {
	// isolate right most number by using % 10
        int rightMostNum = number % 10;

	// use integer division to remove last digit and
	// recurse to calculate the sum
        return rightMostNum + sumOfDigits((number / 10));
    }
}
