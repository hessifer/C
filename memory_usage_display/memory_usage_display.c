#include <stdio.h>

int main(void)
{
    char data_type = 'n';
    int number_of_variables = 0;
    int total_bytes = 0;
    int kilobytes = 0;
    int bytes = 0;
    int megabytes = 0;

    scanf("%c %d", &data_type, &number_of_variables);

    if (data_type == 'i')
    {
        total_bytes = sizeof(int) * number_of_variables;
    }
    else if (data_type == 's') 
    {
        total_bytes = sizeof(short) * number_of_variables;
    }
    else if (data_type == 'c') 
    {
        total_bytes = sizeof(char) * number_of_variables;
    }
    else if (data_type == 'd')
    {
        total_bytes = sizeof(double) * number_of_variables;
    }

    kilobytes = total_bytes / 1000;
    bytes = total_bytes % 1000;
    megabytes = total_bytes / 1000000;

    if (megabytes > 0)
    {
        printf("%d MB and %d KB and %d B\n", megabytes, kilobytes % 1000, bytes);
    }
    else if (kilobytes > 0)
    {
        printf("%d KB and %d B\n", kilobytes, bytes);
    }
    else
    {
        printf("%d B\n", bytes);
    }

    return 0;
}
