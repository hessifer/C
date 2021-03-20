#include <stdio.h>

void resetArrayValues(int*);

int main(void)
{
    // declare array of integers
    int numbers[] = {2, 4, 6, 8};
    int *ptr = numbers;
    int lengthOfNumbers = sizeof(numbers) / sizeof(int);
    
    for (int i=0; i<lengthOfNumbers; i++)
    {
        printf("%d\n", numbers[i]);
    }
    resetArrayValues(ptr);
    for (int i=0; i<lengthOfNumbers; i++)
    {
        printf("%d\n", numbers[i]);
    }
    return 0;
}

void resetArrayValues(int *ptr)
{
    *ptr = 0;
    *(ptr+1) = 0;
    *(ptr+2) = 0;
    *(ptr+3) = 0;
}
