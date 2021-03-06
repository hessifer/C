#include <stdio.h>

int main(void) {
    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 50) {
    	printf("In %d years you will be 50 years old.\n", 50 - age);
    } else {
	printf("You are %d years old.\n", age);
    }
    return 0;
}
