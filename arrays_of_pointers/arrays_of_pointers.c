#include <stdio.h>

int main(void)
{
    short a[3] = {234, 655, 843};
    short b[2] = {12, 62};
    short c[4] = {3456, 3467, 23, 276};
    short *arrays[3] = {a, b, c};

    *arrays[0] = 5;
    *(arrays[0] + 1) = 9; // arrays[0][1]

    *(arrays[2] + 2) = 15; // arrays[2][2] or c[2]

    printf("%d\n", arrays[0][0]);
    printf("%d\n", arrays[0][1]);

    printf("%d\n", arrays[2][2]);
    printf("%d\n", *(arrays[2] + 2));
    return 0;
}
