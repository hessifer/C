#include <stdio.h>

int main() {
    int entryLimit = 0;
    int grade = 0;
    int i = 0;
    int sum = 0;

    scanf("%d", &entryLimit);
    for (i=0; i < entryLimit; i++) {
        scanf("%d", &grade);
        sum = sum + grade;
    }
    printf("%.2lf\n", (double) sum / entryLimit);
    return 0;
}
