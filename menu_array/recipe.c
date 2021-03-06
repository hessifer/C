#include <stdio.h>

int main(void) {
    int ingredients[10];
    int i = 0;
    int ingredient_id = 0;

    for (i=0; i < 10; i++) {
        scanf("%d", &ingredients[i]);
    }
    scanf("%d", &ingredient_id);
    printf("%d\n", ingredients[ingredient_id]);

    return 0;
}
