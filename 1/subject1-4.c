#include <stdio.h>

int main(void) {
    int a[3][4] = {
        {3,1,4,1},
        {5,9,2,6},
        {5,3,5,9}
    };
    int rowSum[3] = {0};
    int totalSum = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            rowSum[i] += a[i][j];
        }

        printf("Sum of %d lines is %d\n", i, rowSum[i]);
        totalSum += rowSum[i];
    }

    printf("The sum is %d\n", totalSum);
    return 0;
}
