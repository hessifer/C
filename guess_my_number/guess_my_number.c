#include <stdio.h>

int main()
{
    int numberToGuess = 0;
    int attempts = 1;
    int guess = 0;

    scanf("%d", &numberToGuess);
    scanf("%d", &guess);

    while (guess != numberToGuess)
    {
	attempts++;
        if (guess > numberToGuess)
	{
            printf("it is less\n");
	}
	else
	{
            printf("it is more\n");
	}
	scanf("%d", &guess);
    }
    printf("Number of tries needed:\n");
    printf("%d\n", attempts);

    return 0;
}
