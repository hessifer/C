#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > 100 && num2 > 100)
        printf("Both Are Greater Than 100.\n");
    else if (num1 > 100 && num2 < 100)
	printf("Only One Is Greater Than 100.\n");
    else if (num1 < 100 && num2 > 100)
	printf("Only One Is Greater Than 100.\n");
    else
        printf("Both Are Less Than 100.\n");

    return 0;
}
