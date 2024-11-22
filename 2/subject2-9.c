
#include <stdio.h>

int main() {
    char targetStr[] = "Keep moving forward, no matter";
    int strIndex = 0;

    printf("%s\n", targetStr);
    printf("Please input index (0-31): ");
    scanf("%d", &strIndex);

    if (strIndex < 0 || strIndex > 31) {
        fprintf(stderr, "Error: Index out of range.\n");
        return 1;
    }

    printf("%d: %c\n", strIndex, targetStr[strIndex]);
    printf("%c: %d\n", targetStr[strIndex], strIndex);
    return 0;
}
