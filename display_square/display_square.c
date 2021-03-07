/*
 * Create a program that displays on the screen a square of n x n stars,
 * with the integer n given as input.
 *
*/

#include <stdio.h> 

int main()
{
    int numberOfStars = 0;

    // get number of starts as input
    scanf("%d", &numberOfStars);

    for (int i = 0; i < numberOfStars; i++)
    {
        for (int j = 0; j < numberOfStars; j++)
	{
            printf("*");    
	}
	printf("\n");
    }
    return 0;
}
