#include <stdio.h>

int main()
{
    int total = 0;
    int input = 0;

    while (input != -1)
    {
       total = total + input; 
       scanf("%d", &input);
    }
    printf("%d\n", total);

    return 0;
}
