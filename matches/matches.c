#include <stdio.h>

int main(void) {
    int size_of_boxes = 0;
    int matches = 0;
    
    scanf("%d", &matches);
    scanf("%d", &size_of_boxes);
    printf("%d\n", matches / size_of_boxes);
    printf("%d\n", matches % size_of_boxes);
    
    return 0;
}
