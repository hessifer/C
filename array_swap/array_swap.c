#include <stdio.h>

void reverseArray(int *);

int main(void)
{
    int numbers[6];

    for (int i=0; i<6; i++)
    {
        scanf("%d", &numbers[i]);
    }

    reverseArray(numbers);

    for (int i=0; i<6; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}

void reverseArray(int *arr)
{
    /*
    // pointer arithmetic
    int tmp = *arr;
    *arr = *(arr+5);
    *(arr+5) = tmp;

    tmp = *(arr+1);
    *(arr+1) = *(arr+4);
    *(arr+4) = tmp;

    tmp = *(arr+2);
    *(arr+2) = *(arr+3);
    *(arr+3) = tmp;

    */

    // array indices
    int tmp = arr[0];
    arr[0] = arr[5];
    arr[5] = tmp;

    tmp = arr[1];
    arr[1] = arr[4];
    arr[4] = tmp;

    tmp = arr[2];
    arr[2] = arr[3];
    arr[3] = tmp;
}
