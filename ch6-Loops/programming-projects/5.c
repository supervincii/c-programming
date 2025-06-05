#include <stdio.h>

int main(void) {
    int original, reversed = 0, x;

    printf("Enter an integer: ");
    scanf("%d", &original);

    do {
        x = original % 10;
        original = original / 10;
        reversed = (reversed * 10) + x;
    } while (original > 0);

    printf("The reversal is %d\n", reversed);
    return 0;
}
