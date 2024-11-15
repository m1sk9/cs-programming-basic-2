#include <stdio.h>

int main(void) {
    int x[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int y[2];
    int i;
    int k = 2;
    int n = 9;

    printf("Before rotation: ");
    for (i = 0; i < n; i ++) {
        printf("%d ", x[i]);
    }

    printf("\n");

    printf("After rotation: ");
    for (i = 0; i < k; i++) {
        y[i] = x[i];
    }

    for (i = k; i < n; i++) {
        x[i - k] = x[i];
    }

    for (i = 0; i < k; i++) {
        x[n - k + i] = y[i];
    }

    for (i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }

    printf("\n");

    return 0;
}
