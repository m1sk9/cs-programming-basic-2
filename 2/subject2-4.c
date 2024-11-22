#include <stdio.h>

int main(void) {
    char s[100] = {0};

    int i = 0;
    int j = 0;
    int m = 0;
    int t = 0;
    int len = 0;

    printf("Please enter a string: ");
    scanf("%s", s);

    while (s[len] != '\0') {
        len++;
    }

    for (i = 0; i < len - 1; i++) {
        m = i;
        for (j = i + 1; j < len; j++) {
            if (s[j] < s[m]) {
                m = j;
            }
        }

        t = s[i];
        s[i] = s[m];
        s[m] = t;
    }

    printf("Sorted string: %s\n", s);

    return 0;
}
