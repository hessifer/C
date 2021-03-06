#include <stdio.h>

int main() {
    int treeHeight = 0;
    int numberOfLeaflets = 0;

    scanf("%d", &treeHeight);
    scanf("%d", &numberOfLeaflets);

    if (treeHeight < 6 && numberOfLeaflets > 7) {
        printf("Tinuviel\n");
    } else if (treeHeight > 9 && numberOfLeaflets > 9) {
	printf("Calaelen\n");
    } else if (treeHeight < 9 && numberOfLeaflets < 6) {
	printf("Falarion\n");
    } else if (treeHeight > 11 && numberOfLeaflets < 8) {
	printf("Dorthonion\n");
    } else {
        printf("Uncertain\n");
    }

    return 0;
}
