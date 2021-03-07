 // Use linear search to test membership

#include <stdio.h>

int main()
{
    int numbers[] = {4, 98, -2, 4, -9, 6, 11, 27, 90, 100};    
    int maxIndex = 10;
    int numberToFind = 0;
    int i = 0;
    int found = 0;

    // ask user for number to search
    printf("Please enter the number you are looking for: ");
    scanf("%d", &numberToFind);

    while (!found && i < maxIndex)
    {
	if (numbers[i] == numberToFind)
	{
            found = 1;
	}
	else
	{
            i++;
	}
    }

    if (found)
    {
        printf("The number %d was found at index %d.\n", numberToFind, i);
    }
    else
    {
        printf("The number %d was not found.\n", numberToFind);
    }

    return 0;
}
