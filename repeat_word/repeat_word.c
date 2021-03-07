#include <stdio.h>

int main()
{
    int timesToRepeat = 0;
    char word[101];

    scanf("%d", &timesToRepeat);
    scanf("%s", word);

    for (int i = 0; i < timesToRepeat; i++)
    {
        printf("%s\n", word);
    }

    return 0;
}
