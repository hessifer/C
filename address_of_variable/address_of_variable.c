#include <stdio.h>

int main(void)
{
    int a = 42;
    double pie = 3.15;
    char letter = 'c';

    // pointers (point to the address of another variable)
    int *addressOfA = &a;  // & gives  you the 'address of'
    double *addressOfPie = &pie;
    char *addressOfLetter = &letter;

    // display the addresses of our variables
    printf("Address of a: %p\n", addressOfA);
    printf("Address of pie: %p\n", addressOfPie);
    printf("Address of letter: %p\n", addressOfLetter);

    // display the values of variable at address
    printf("Value at address %p is %d\n", addressOfA, *addressOfA); // use * to dereference
    printf("Value at address %p is %.2lf\n", addressOfPie, *addressOfPie);
    printf("Value at address %p is %c\n", addressOfLetter, *addressOfLetter);

    return 0;
}


