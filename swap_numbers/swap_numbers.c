#include <stdio.h>

// prototype takes two pointers
void swap(int*, int*);

int main(void)
{
    int num1 = 5;
    int num2 = 4;

    // pass address of variables
    swap(&num1, &num2);
    printf("%d - %d\n", num1, num2);

    return 0;

}

// function that takes two pointers
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
