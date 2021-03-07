/*
Your job is to find the length of the longest word in a text with no 
punctuation or special characters of any kind - only contains words. 
To do so, please write a C-program that takes as a input first the 
number of words in a text, followed by all of the words in the text. 
The output of your program should be the length of the longest word 
in the text.

To simplify your program, you can assume that the longest word will 
not exceed 100 characters.
*/

#include <stdio.h>

int main() {
    int numberOfWords = 0;
    int longestWord = 0;
    int wordLength = 0;
    char word[101];

    scanf("%d", &numberOfWords);

    for (int i = 0; i < numberOfWords; i++)
    {
        scanf("%s", word);
	while (word[wordLength] != '\0')
	{
            wordLength++;
	}
	if (wordLength > longestWord)
	{
            longestWord = wordLength;
	}
	wordLength = 0;
    }
    printf("%d\n", longestWord);

    return 0;
}
