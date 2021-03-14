#include <stdio.h>

int fibonacci(int);

int main(void)
{
    int number = 0;
    int fib = 0;

    printf("Which Fibonacci number would you like (2nd, 3rd, 5th): ");
    scanf("%d", &number);

    if (number <= 0)
    {
        printf("%d is not positive. Aborting...\n", number);
    }
    else 
    {
        fib = fibonacci(number);
	printf("The %dth Fibonacci number is %d.\n", number, fib);
    }

    return 0;
}

int fibonacci(int num)
{
    // 0, 1, 1, 2, 3, ...
    if (num==1)
    {
        return 0;
    }
    else if (num==2)
    {
        return 1;
    } 
    else 
    {
        return (fibonacci(num-1) + fibonacci(num-2));
    }
}
