#include <stdio.h>

int main(void) {
    int num, hundreds, tens, ones;

    printf("Enter a two-digit to three-digit number: ");
    scanf("%d", &num);

    hundreds = num / 100;
    tens = num / 10 % 10;
    ones = num % 10;

    printf("The reversal is %d%d%d\n", ones, tens, hundreds);

    return 0;
}
