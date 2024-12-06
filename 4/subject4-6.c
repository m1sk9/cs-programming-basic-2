#include <stdio.h>

int main(void) {
    int i = 0;
    int result = 0;
    int a[] = {5, 10, 15, 20, 25};
    int *p = a;

    for (i = 0; i < 5; i++) {
        result += *(p + i);
    }
    printf("Sum of array a: %d\n", result);

    return 0;
}
