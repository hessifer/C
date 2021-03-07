#include <stdio.h>

int main()
{
    char name[51];
    int oddLine = 2;
    int evenLine = 1;
    int i = 0;

    scanf("%s", name);
    while (name[i] != '\0')
    {
        i++;
    }

    if (i % 2 == 0)
    {
        printf("%d\n", evenLine);
    }
    else
    {
        printf("%d\n", oddLine);
    }


    return 0;
}
