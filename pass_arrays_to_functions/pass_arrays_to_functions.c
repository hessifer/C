#include <stdio.h>

void squareArray(int *, int);
void printArray(int *, int);

int main(void)
{
    int numbers[] = {1, 2, 3, 4, 5, 6};
    int numbersLength = 6;

    // call silly function to print array
    printArray(numbers, numbersLength);    

    // call function to square each value of array in place
    squareArray(numbers, numbersLength);
    
    // print array after squaring in place 
    printArray(numbers, numbersLength);    

    return 0;
}

void squareArray(int *ptr, int size)
{
    for (int i=0; i<size; i++)
    {
        ptr[i] = ptr[i] * ptr[i];
    }
}

void printArray(int *ptr, int size)
{
    for (int i=0; i<size; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}
