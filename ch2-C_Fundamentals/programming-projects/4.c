/* Displays amount with tax added to user input */

#include <stdio.h>

#define TAX 0.05

int main(void) {
    float initial, with_tax;

    printf("Enter an amount: ");
    scanf("%f", &initial);
    with_tax = initial + (initial * TAX);
    printf("With tax added: %.2f\n", with_tax);

    return 0;
}
