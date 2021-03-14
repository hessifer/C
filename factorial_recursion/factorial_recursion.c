#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int factorial(int);

int main()
{
    int number = 0;
    int facto = 1; // setting to 1 otherwise result would be 0

    // Ask user for number
    printf("Please enter a positive integer: ");
    scanf("%d", &number);

    // is number positive
    if (number < 0)
    {
        printf("%d is negative. Aborting...\n", number);
    }
    else
    {
        facto = factorial(number);
	printf("%d! = %d\n", number, facto);
    }

    return 0;
}

// example usage of recursion
int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    return num * factorial(num - 1);
}
