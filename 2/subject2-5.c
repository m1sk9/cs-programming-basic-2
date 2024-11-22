#include <stdio.h>

int main(void) {
    char s[100];
    char k[100] = {0};
    char o[100] = {0};

    int i = 0;

    printf("Please input string: ");
    scanf("%s", s);

    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            k[i] = s[i] + ('a' - 'A');
        } else {
            k[i] = s[i];
        }

        i++;
    }
    k[i] = '\0';

    i = 0;
    while (k[i] != '\0') {
        o[i] = k[i] - ('a' - 'A');
        i++;
    }
    o[i] = '\0';

    printf("Replace small: %s\n", k);
    printf("Replace capital: %s\n", o);

    return 0;
}
