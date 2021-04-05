#include <stdio.h>

void avg_sum(double[], int, double *, double *);

int main(void)
{
    double numbers[] = {1.0, 2.0, 10.3};
    double sum = 0.0;
    double avg = 0.0;
    
    avg_sum(numbers, 3, &avg, &sum);
    printf("The average of numbers is: %.2lf\n", avg);
    return 0;
}

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;
    
    for (i=0; i<n; i++)
        *sum += a[i];
    *avg = *sum / n;
}
