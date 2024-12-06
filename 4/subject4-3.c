#include <ctype.h>
#include <stdio.h>

// gets is deprecated
int main(void) {
    char str[256];
    int i = 0;

    printf("Please enter a string: ");
    gets(str);

    str[0] = toupper(str[0]);

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            i++;
            str[i] = toupper(str[i]);
        }
        i++;
    }

    printf("%s\n", str);
    return 0;
}
