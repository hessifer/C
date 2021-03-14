#include <stdio.h>

int main(void)
{
    // 5! = 1*2*3*4*5
    // factorial is a number that multiplies every number below it
    // formulat: n * (n-1) * (n-2) * ... 1
    int number;
    int facto;

    printf("Please enter a positive integer: ");
    scanf("%d", &number);

    facto = 1;
    for (int i=1; i<=number; i++)
    {
        facto = i*facto;
    }
    if (number<0)
    {
        printf("%d is negative! Aborting...\n", number);
    }
    else
    {
        printf("%d! = %d\n", number, facto);
    }

    return 0;
}
