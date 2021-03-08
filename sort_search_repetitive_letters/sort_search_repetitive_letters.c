#include <stdio.h>

int main()
{
    /*
     * Find out how many letters occur multiple times in a given word.
     * 1. read a word from input
     * 2. sort the letters of the word alphabetically (by ASCII codes)
     * 3. iterate over letters to find what letters equal then on to the right
     *    of it and increment counter by 1
     * 4. skip ahead as not to recount your letters (letters occurring more
     *    than twice cannot be counted)
     * 5. you may assume lowercase letters and no more than 50 letters
     */

    char word[51];
    char temp = 'A';
    int wordLength = 0;
    int e = 0;
    int swapped = 1;
    int counter = 0;


    // get word from user
    scanf("%s", word);

    // get word length
    while (word[e] != '\0')
    {
        e++;
    }
    wordLength = e;

    // repeat as long as we have values to swap
    while (swapped)
    {
        swapped = 0;
	for (int i=0; i+1<wordLength; i++) // avoid comparing last element
	{
            if (word[i] > word[i+1])
	    {
		temp = word[i];
                word[i] = word[i+1];    
		word[i+1] = temp;
		swapped = 1;
	    }
	}
    }

    // iterate over array and count repeated letters 
    // do not increment counter for letters repeated more than twice
    for (int i=0; i<wordLength; i++)
    {
        if (word[i] == word[i+1] && word[i+2] != word[i])
	{
            counter++;
	}
    }

    // display number of repeats
    printf("%d\n", counter);
    
    return 0;
}
