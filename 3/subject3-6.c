#include <stdio.h>

int gcm(int, int);

int main(void) {
    int min = 0;
    int max = 0;

    printf("Please enter two integers: ");
    scanf("%d %d", &min, &max);

    printf("%d and %d = %d", min, max, gcm(min, max));
    return 0;
}

int gcm(int min, int max) {
    int z = 0;
    int tmp = 0;

    while (max != 0) {
        tmp = max;
        max = min % max;
        min = tmp;
    }

    return min;
}
