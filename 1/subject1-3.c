#include <stdio.h>

int main(void) {
    int a[10] = {4, 1, 0, 6, 2, 3, 5, 9, 7, 8};
    int b[10];
    int i;

    for (i = 0; i < 10; i++) {
        b[i] = a[9 - i];
    }

    for (i = 0; i < 10; i++) {
        printf("b[%d] = %d \n", i, b[i]);
    }

    return 0;
}
