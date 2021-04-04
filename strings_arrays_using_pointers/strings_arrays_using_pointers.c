#include <stdio.h>

int main(void)
{
    // don't forget null terminator
    char a[4];
    char b[6];
    char c[9];
    char *words[3] = {a, b, c}; // starting address of a, b, c

    printf("Please enter a word with at most 3 letters: ");
    scanf("%s", a); // char array we don't use address of operator

    printf("Please enter a word with at most 5 letters: ");
    scanf("%s", b);

    printf("Please enter a word with at most 8 letters: ");
    scanf("%s", c);

    printf("You entered:\n%s\n%s\n%s\n", a, b, c);
    printf("\n");

    printf("%s - %s - %s\n", words[0], words[1], words[2]);


    return 0;
}
