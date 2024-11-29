#include <stdio.h>

void circle(double r);

int main(void) {
    double r;

    printf("Enter radius: ");
    scanf("%lf", &r);

    circle(r);

    return 0;
}

void circle(double r) {
    const double PI = 3.14159;
    double circumference = 2 * PI * r;
    double area = PI * r * r;
    double volume = (4.0 / 3.0) * PI * r * r * r;

    printf("The circumference is %.2f.\n", circumference);
    printf("The area of the circle is %.2f.\n", area);
    printf("The volume of the sphere is %.2f.\n", volume);
}
