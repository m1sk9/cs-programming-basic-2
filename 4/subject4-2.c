#include <stdio.h>
#include <string.h>
#include <ctype.h>

// gets is deprecated
int main(void) {
    int i = 0;
    int r = 0;
    char first_word[30];
    char second_word[30];

    printf("First word: ");
    gets(first_word);
    printf("Second word: ");
    gets(second_word);

    while (first_word[i] != '\0') {
        first_word[i] = tolower(first_word[i]);
        i++;
    }

    i = 0;
    while (second_word[i] != '\0') {
        second_word[i] = tolower(second_word[i]);
        i++;
    }

    r = strcmp(first_word, second_word);

    if (r < 0) {
        printf("%s comes before %s in dictionary order\n", first_word, second_word);
    } else if (r > 0) {
        printf("%s comes after %s in dictionary order\n", first_word, second_word);
    } else {
        printf("They do not match");
    }

    return 0;
}
