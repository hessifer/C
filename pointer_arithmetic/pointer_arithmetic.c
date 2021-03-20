#include <stdio.h>

int main(void)
{
    // create an int array
    int numbers[3] = {4, 7, 9};

    // create ptr to starting address of numbers
    int *addrNumbers = numbers; 
    int numbersLength = sizeof(numbers) / sizeof(int);

    // use ptr arithmetic to change value of second element
    *(addrNumbers+1) = 3;

    for (int i=0; i<numbersLength; i++)
    {
        printf("%d -> %d\n", i, numbers[i]);
    }

    return 0;
}



