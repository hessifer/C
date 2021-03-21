#include <stdio.h>

int main(void)
{
    int array[] = {6, 2, -4, 8, 5, 1};
    int *ptr = array;
    int *ptr2 = &array[1];

    // use indices for values and address of operator '&' to get memory address
    printf("Array contains %d, %d, ... , %d\n", array[0], array[1], array[5]);
    printf("These are stored at %p, %p, ... , %p\n", &array[0], &array[1], &array[5]);

    printf("\n\n");

    // use pointers to get address and dereference to get value
    printf("Element 0 at address %p contains value %d\n", ptr, *ptr);
    printf("Element 1 at address %p contains value %d\n", ptr2, *ptr2);

    // change value or arry[0]
    *ptr = 99;
    printf("Element 0 at address %p contains value %d\n", ptr, *ptr);

    *(ptr+1) = 47; // pointer arithmetic to change value at array[1]
    printf("Element 1 at address %p contains value %d\n", ptr2, *ptr2);

    // no need to use ptr use the array directly
    *array = 3;
    printf("Element 0 at address %p contains value %d\n", array, *array);

    *(array+1) = 234;
    printf("Element 1 at address %p contains value %d\n", array+1, *(array+1));

    // increment ptr location with ++, move from element 0 to element 1
    ptr++;
    printf("Element 1 at address %p contains value %d\n", ptr, *ptr);

    return 0;
}
