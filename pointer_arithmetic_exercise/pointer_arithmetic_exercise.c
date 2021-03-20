#include <stdio.h>

int main(void)
{
    int array[] = {4, 6, 12, -5, -7, 3, 1, 0, -10};
    int *ptr1, *ptr2;
    ptr1 = array+2;  // pointer to 3rd element's address
    ptr2 = &ptr1[5];  // pointer to 8th element's address

    printf("%p\n", ptr1); // print address of ptr1
    printf("%p\n", ptr2); // print address of ptr2


    // print values
    printf("%d\n", *(ptr1+1));  // print -5  (4th element)
    printf("%d\n", *(ptr2-3));  // print -7  (5th element)


    // print more values
    printf("Value of ptr1: %d\n", *ptr1);

    return 0;
}
