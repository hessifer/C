#include <stdio.h>

int main()
{
    int minTempValue = 0;
    int maxTempValue = 0;
    int tempReading = 0;
    int stopReading = -999;

    scanf("%d", &minTempValue);
    scanf("%d", &maxTempValue);

    while (tempReading != stopReading)
    {
        scanf("%d", &tempReading);
	if (tempReading >= minTempValue && tempReading <= maxTempValue)
	{
            printf("Nothing to report\n");
	}
	else
	{
	    if (tempReading != stopReading)
	    {
                printf("Alert!\n");
	    }
            tempReading = stopReading;
	}

    }

    return 0;
}
