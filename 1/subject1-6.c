#include <stdio.h>

int main(void) {
    int a[5];
    int i;

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    int firstMin = a[0];
    int secondMin = a[0];

    for (i = 1; i < 5; i++) {
        if (a[i] < firstMin) {
            secondMin = firstMin;
            firstMin = a[i];
        } else if (a[i] < secondMin || firstMin == secondMin) {
            secondMin = a[i];
        }
    }

    printf("%d, %d", firstMin, secondMin);
    return 0;
}
