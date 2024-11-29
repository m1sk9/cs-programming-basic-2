#include <stdio.h>

int main(void) {
    int x = 2020;
    int *px = &x;

    printf("*px = %d\n", *px);

    *px = 3020;
    printf("After changing the value of *px\n");
    printf("*px = %d\n", *px);

    printf("x = %d\n", x);
}
