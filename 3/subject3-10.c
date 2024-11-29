#include <stdio.h>

int main(void){
    int x = 10, y = 20, z = 30;
    int *ptr1, *ptr2;

    printf("===Before Processing===\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    ptr1 = &x;
    ptr2 = &y;
    *ptr1 = *ptr1 + *ptr2;
    ptr2 = &z;
    *ptr2 = *ptr1 + *ptr2;
    ptr1 = &y;
    *ptr1 = *ptr1 + *ptr2;

    printf("\n===After Processing===\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
