#include <stdio.h>

int isReverse(char*, char*);
int length(char*);

int main(void)
{
    char n1[100];
    char n2[100];

    scanf("%s", n1);
    scanf("%s", n2);
    
    if (isReverse(n1, n2))
    {
        printf("%s is the reverse of %s\n", n1, n2);
    }
    else
    {
        printf("%s is not the reverse of %s\n", n1, n2);
    }

    return 0;
}

int isReverse(char *name1, char *name2)
{
    int name1Length = length(name1);	
    int name2Length = length(name2);	

    if (name1Length != name2Length)
    {
        return 0;
    }
    else
    {
	// needs to be optimized so we don't check based middle
        for (int i=0; i<name1Length; i++)
	{
            if (name1[i] != name2[(name1Length -1) - i])
	    {
                return 0;
	    }
	}
    }
    return 1;
}

int length(char *str)
{
    int i = 0;

    for (i=0; str[i] != '\0'; i++);

    return i;
}
