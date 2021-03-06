#include <stdio.h>

int main(void) {
    int num = 0;
    int i = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i=0; i < 11; i++) {
        printf("%dx%d = %d\n", i, num, i*num);
    }
    return 0;
}
