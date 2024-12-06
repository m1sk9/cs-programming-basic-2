#include <stdio.h>

int main(void) {
    int i = 0;
    int a[] = {5, 10, 15, 20, 25};
    int *p = a;

    printf("Using pointer expression: \n");
    for (i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, *(p + i));
    }

    printf("Using array expression: \n");
    for (i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, p[i]);
    }

    return 0;
}
