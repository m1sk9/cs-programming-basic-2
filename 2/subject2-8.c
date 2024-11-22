#include <math.h>
#include <stdio.h>

int main(void) {
    double data[5];
    double dev[5];

    int i = 0;
    double sum = 0;
    double ave = 0;
    double sd2 = 0;
    double var = 0;
    double sdev = 0;

    printf("Please input number (5): ");
    for (i = 0; i < 5; i++) {
        printf("%d, data: ", i + 1);
        scanf("%lf", &data[i]);
    }
    printf("\n");

    for (i = 0; i < 5; i++) {
        sum += data[i];
    }

    ave = sum / 5;

    for (i = 0; i < 5; i++) {
        dev[i] = data[i] - ave;
        sd2 += pow(dev[i], 2);
    }

    var = sd2 / 5;
    sdev = sqrt(var);

    printf("Average: %.3f\n", ave);
    printf("Variance: %.3f\n", var);
    printf("Standard deviation: %.3f\n", sdev);

    return 0;
}
