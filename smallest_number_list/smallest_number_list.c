#include <stdio.h>

int main(void)
{
    int count = 0;
    int minNumber = 0;
    int numbers[51];
    int result = 0;

    int min(int, int);

    // get number of integers to be entered
    scanf("%d", &count);

    for (int i=0; i<count; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // find smallest number
    minNumber = numbers[0];
    for (int i=0; i<count; i=i+2)
    {
        result = min(numbers[i], numbers[i+1]);
	if (result < minNumber)
	{
	    minNumber = result;
	}
    }
    
    printf("%d\n", minNumber);

    return 0;
}

int min(int num1, int num2)
{
    if (num1 > num2)
    {
        return num2;
    }
    return num1;
}
