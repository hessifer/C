#include <stdio.h>

void addThree(int*);

int main(void)
{
    int x = 5;

    printf("Original value of x: %d\n", x);
    addThree(&x);
    printf("New value of x: %d\n", x);

    return 0;
}

void addThree(int *num)
{
    *num = *num + 3;
}
