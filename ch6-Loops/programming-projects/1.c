#include <stdio.h>

int main(void) {
    float x, max;

    max = 0.0f;

    do {
        printf("Enter a number: ");
        scanf("%f", &x);
        if (x > max) max = x;
    } while (x > 0);

    printf("The largest number entered was %f\n", max);

    return 0;
}
