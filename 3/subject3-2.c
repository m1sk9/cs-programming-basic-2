#include <stdio.h>

int jikan(int);

int main(void) {
    int time = 0;
    int result = 0;

    printf("Please enter the time: ");
    scanf("%d", &time);

    result = jikan(time);

    printf("%d[hours]=%d[seconds]\n", time, result);
    return 0;
}

int jikan(int hour) {
    return hour * 3600;
}
