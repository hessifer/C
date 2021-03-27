#include <stdio.h>

void setToZero(short **);
void displayArrayContents(short *, short);

int main(void)
{
    short a[3] = {1245, 1924, 234};
    short b[2] = {45, 198};

    displayArrayContents(a, 3);
    displayArrayContents(b, 2);

    // array of arrays
    short *t[2] = {a, b};
    
    setToZero(t);
    displayArrayContents(a, 3);
    displayArrayContents(b, 2);


    return 0;
}

void setToZero(short **t)
{
    // set first element of first array
    *(*t) = 0; // t[0][0] or *(t[0] + 0)

   // set second element of first array
   *((*t) + 1) = 0; // t[0][1] or *(t[0] + 1)

   // set third element of first array
   *((*t) + 2) = 0; // t[0][2] or *(t[0] + 2)

   // set first element of second array
   *(*(t + 1) + 0) = 0; // t[1][0] or *[t[1] + 0)
   // t[1][0] = 0;

   // set second element of second array
   *(*(t + 1) + 1) = 0; // t[1][1] or*(t[1] + 1)
}

void displayArrayContents(short *arr, short size)
{
    for (int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
