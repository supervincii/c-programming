#include <stdio.h>

int main(void) {
    int x;
    long long int value;

    printf("Enter value of x: ");
    scanf("%d", &x);

    value = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("The value of the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is %lld\n", value);

    return 0;
}
