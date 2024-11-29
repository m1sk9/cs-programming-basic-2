#include <stdio.h>

int main(void){
    int x = 1080, *px;
    double y = 2.56;

    px = &x;
    printf("x = %d\t<%p>\n", x, &x);
    printf("y = %.2f\t<%p>\n", y, &y);
    printf("px = %p\t<%p>\n", px, &px);

    return 0;
}
