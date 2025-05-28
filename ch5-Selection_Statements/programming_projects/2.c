#include <stdio.h>

int main(void) {
    int hour, min;

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &min);

    printf("Equivalent 12-hour time: ");
    if (hour > 12 && hour <= 23) {
        printf("%d:%d", hour % 12, min);
    }
    else {
        printf("%d:%d", hour != 0 ? hour : 12, min);
    }

    if (hour >= 12 && hour <= 23) {
        printf(" PM");
    }
    else {
        printf(" AM");
    }

    printf("\n");

    return 0;
}
