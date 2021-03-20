#include <stdio.h>

//Write your function prototype here
void addAge(int*);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	//Write your function call here
	addAge(ageAddr);

	printf("Your new age will be %d!\n", age);
	return 0;
}


//Write your function here
void addAge(int *currentAge)
{
    if (*currentAge > 21)
    {
        *currentAge = *currentAge - 10;
    }
    else
    {
        *currentAge = *currentAge * 2;
    }
}
