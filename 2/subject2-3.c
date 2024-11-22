#include <stdio.h>

int main(void) {
    char country[4][10] = { "Japan", "England", "Canada", "Australia" };
    int i = 0;
    int num = 0;

    for (i = 0; i < 4; i++) {
        while (country[i][num] != '\0') {
            num++;
        }

        printf("%-10s %d\n", country[i], num);
    }

    return 0;
}
