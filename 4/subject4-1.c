#include <stdio.h>
#include <string.h>

int main(void) {
    char str[128];

    printf("Comparing with ABCD\n");

    while(1) {
        printf("Please enter a string: ");
        scanf("%s", str);

        if(strcmp(str, "ABCD") == 0) {
            printf("Matched");
            break;
        }
    }

    return 0;
}
