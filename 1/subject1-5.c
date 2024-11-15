#include <stdio.h>

int main(void) {
    int used[10];
    int i;
    int x;
    int selectCount;
    int count;

    for (i = 0; i <= 5; i++) {
        used[i] = 0;
    }

    printf("Enter the number of times you want to choose: ");
    scanf("%d", &selectCount);
    if (selectCount >= 6) {
        selectCount = 6;
    }


    count = 0;
    printf("The number of times to choose is %d times", selectCount);
    printf("Please select 3 from 0~5\n");

    while (count < selectCount) {
        scanf("%d", &x);

        if (x < 0 || x > 5) {
            printf("Range is 0~5\n");
            continue;
        }

        if (used[x] == 1) {
            printf("That number has already been selected.\n");
            continue;
        }

        used[x] = 1;
        count++;

        printf("Input value %d accepted\n", x);
    }

    printf("The number of choices is. ");
    for (i = 0; i <= 5; i++) {
        if (used[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
