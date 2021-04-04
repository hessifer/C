#include <stdio.h>

#define W 3
#define L 10

int main(void)
{
    char words[W][L];
    int i = 0;
    int j = 1;
    
    printf("Enter %d words with less than %d letters.\n", W, L);
    for (int i=0; i<W; i++)
    {
        scanf("%s", words[i]);
    } 

    // print words entered
    printf("You entered the following words: \n");
    for (int i=0; i<W; i++)
    {
        printf("%s\n", words[i]);
    }

    // print each odd number letter in each word
    printf("The odd number letters in your words are: \n");
    for (i=0; i<W; i++)
    {
        for (j=1; j<L-1; j=j+2)
	{
	    printf("%c", words[i][j]);
	}
	printf("\n");
	j=1;
    }

    return 0;
}
