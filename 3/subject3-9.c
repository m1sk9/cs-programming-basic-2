#include <stdio.h>

int main(void){
    int x, *px;

    px = &x;

    printf("Enter an integer: ");
    scanf("%d", px);

    if (*px > 0) {
        printf("Positive number\n");
    }
    else if (*px < 0) {
        printf("Negative number\n");
    }
    else {
        printf("Zero\n");
    }

    return 0;
}
