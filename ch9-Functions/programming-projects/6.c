#include <stdio.h>

int compute_polynomial(int x);

int main(void) {
    int x, value;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    value = compute_polynomial(x);

    printf("The value of the polynomial is %d\n", value);
    return 0;
}

int compute_polynomial(int x) {
    int value = x * (x * (x * (x * ((3 * x) + 2) - 5) - 1) + 7) + 6;
    return value;
}
