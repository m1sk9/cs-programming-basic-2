#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    int i = 0;
    int j = 0;
    int num = 1;
    int len1 = 0;
    int len2 = 0;

    char str[20];
    char word[20];

    while (1) {
        printf("Input string: ");
        scanf("%s", str);
        len1 = strlen(str);

        if (len1 > 0 && len1 < 20) {
            break;
        }

        printf("Please enter between 1 and 20 characters\n");
    }

    word[j] = '\0';

    do {
        word[j] = str[i];
        i++;
        j++;

        if (isupper(str[i]) || i == len1) {
            word[j] = '\0';
            len2 = strlen(word);
            printf("%s(%d characters)\n", word, len2);

            num++;
            j = 0;
            word[j] = '\0';
        }
    } while (i < len1);

    return 0;
}
