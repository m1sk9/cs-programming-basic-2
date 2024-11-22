#include <stdio.h>

int main(void) {
    char name[100];

    printf("Please enter your name in Roman alphabet: ");
    scanf("%s", name);

    printf("Hello．%s.\n", name);
    return 0;
}
