#include <stdio.h>

int main(void)
{
    // basic types
    int number = 5;
    char letter = 'z';
    double money = 3.45;

    int numbers[3];
    char letters[3];
    double monies[3]; // :`)

    // get size in bytes of each basic type
    printf("Size in Bytes for int: %zu\n", sizeof(number));
    printf("Size in Bytes for char: %zu\n", sizeof(letter));
    printf("Size in Bytes for double: %zu\n", sizeof(money));
    printf("Size in Bytes for array of 3 int: %zu\n", sizeof(numbers));
    printf("Size in Bytes for array of 3 char: %zu\n", sizeof(letters));
    printf("Size in Bytes for array of 3 double: %zu\n", sizeof(monies));

    // get array size
    printf("Number of elements in int array numbers: %lu\n", sizeof(numbers) / 4);

    return 0;
}
