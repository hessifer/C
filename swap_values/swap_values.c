#include <stdio.h>

void swap(int *, int *);

int main(void)
{
    int x = 5;
    int y = 10;

    swap(&x, &y);
    printf("x: %d\ny: %d\n", x, y);

    return 0;
}

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
