#include <stdio.h>

int main(void) {
    char city[5][100];
    int i = 0;

    printf("%d: Cities with the largest population: ", i);
    scanf("%s", city[i]);
    for (i = 1; i < 5; i++) {
        printf("%d: Cities with the largest population: ", i);
        scanf("%s", city[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("%d:%s\n", i, city[i]);
    }

    return 0;
}
