#include <stdio.h>

double division(int, int);

int main(void) {
    int x = 0;
    int y = 0;
    double result = 0.0;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    result = division(x, y);

    printf("x ÷ y = %f\n", result);
    return 0;
}

double division(int a, int b) {
    return (double) a / b;
}
