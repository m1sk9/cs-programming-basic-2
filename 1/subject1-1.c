#include <stdio.h>

int main(void) {
    int x[5];
    int n = 5;
    int i;
    int imax = 0;
    int imin = 0;

    printf("Please enter 5 integers: \n");

    for (i = 0; i < n; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &x[i]);
    }

    printf("\n");

    for (i = 0; i < n; i++) {
        if (x[i] < x[imin]) {
            imin = i;
        }

        if (x[i] > x[imax]) {
            imax = i;
        }
    }

    printf("Minimum value is the %dth %d \n", imin + 1, x[imin]);
    printf("Maximum value is the %dth %d \n", imax + 1, x[imax]);

    return 0;
}
