#include <stdio.h>

void max_min(int[] , int *, int *);

int main(void)
{
    int numbers[10] = {0};
    int max_num = 0;
    int min_num = 0;

    printf("Enter 10 numbers: ");
    for (int i=0; i<10; i++)
    {
        scanf("%d", &numbers[i]);
    }
    
    max_min(numbers, &max_num, &min_num);
    printf("MAX Number: %d\nMin Number: %d\n", max_num, min_num);

    return 0;
}

void max_min(int arr[] , int *max, int *min) 
{
    *max = *min = arr[0];

    for (int i=1; i<10; i++)
    {
        if (arr[i] > *max)
	    *max = arr[i];
	else if (arr[i] < *min)
	    *min = arr[i];
    }
}
