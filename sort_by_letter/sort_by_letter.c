#include <stdio.h>

int main()
{
    char word1[50];
    char word2[50];
    int i = 0;

    // get words from user
    printf("Please enter the first word to compare: ");
    scanf("%s", word1);

    printf("Please enter the second word to compare: ");
    scanf("%s", word2);

    // find where first letter between words differs
    while (word1[i] != '\0' && word2[i] != '\0' && word1[i] == word2[i])
    {
        i++;
    }

    // check ASCII value to see which comes first (case will need to be addressed later on)
    if (word1[i] > word2[i])
    {
        printf("%s comes before %s in the alphabet.\n", word2, word1);
    }
    else if (word1[i] < word2[i])
    {
        printf("%s comes before %s in the alphabet.\n", word1, word2);
    }
    else
    {
        printf("You entered the same word, %s, twice.\n", word1);
    }

    return 0;
}
