/*
 * You are conducting a linguistic study and are interested in finding words 
 * that contain the letter 't' or 'T' in the first half of the word (including
 * the middle letter if there is one). Specifically, if the first half of the
 * word does contain a 't' or a 'T', your program should output a 1. If the 
 * first half does not contain the letter 't' or 'T', but the second half 
 * does, then your program should output a 2. Otherwise, if there is no 't'
 * or 'T' in the word at all, your program's output should be -1. You may 
 * assume that the word entered does not have more than 50 letters.
 *
 */

#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int hit = 0;
    int hitLocations[51]; // for later if we have more than one hit
    char word[51];

    // get word from user
    scanf("%s", word);

    // loop over word and look for t or T and get size
    while (word[i] != '\0')
    {
	if (word[i] == 't' || word[i] == 'T')
	{
            hit = 1;
	    hitLocations[j] = i;
	    j++;
	}
        i++;
    }

    // display correct status to screen 
    if (hit)
    {
	if (i % 2 != 0) // check for middle pos
	{
	    if (hitLocations[0] < i / 2 + 1)
	    {
                printf("1\n");
	    }
	}
	else if (hitLocations[0] < i / 2)
	{
            printf("1\n");
	}
	else
	{
            printf("2\n");
	}
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}
