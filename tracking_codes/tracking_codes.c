#include <stdio.h>

int main(void)
{
    int number_of_codes = 0;
    int length_of_code = 0;
    int total_space_needed = 0;
    char type_of_code = 'q';

    // read integer number for quantity of tracking codes to enter
    scanf("%d", &number_of_codes);

    // for the all the int number of codes
    // if we get invalid type of code, print 'Invalid tracking code type' and exit
    // 1. read in int length_of_code
    // 2. type of code i - int, d - double, c - char
    for (int i=0; i<number_of_codes; i++)
    {
	scanf("%d %c", &length_of_code, &type_of_code);

	if (type_of_code == 'i')
	{
            total_space_needed = total_space_needed + (length_of_code * sizeof(int));
	}
	else if (type_of_code == 'd')
	{
            total_space_needed = total_space_needed + (length_of_code * sizeof(double));
	}
	else if (type_of_code == 'c')
	{
            total_space_needed = total_space_needed + (length_of_code * sizeof(char));
	}
	else
        {
            printf("Invalid tracking code type\n");
	    return 1;
        }
    }

    // print total bytes of memory required to store codes
    printf("%d bytes\n", total_space_needed);

    return 0;
}
