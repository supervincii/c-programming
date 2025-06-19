#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator,
            int *reduced_denominator);

int main(void) {
    int num, denom, reduced_numerator, reduced_denominator;

    printf("Enter a fraction: ");
    scanf("%d /%d", &num, &denom);

    reduce(num, denom, &reduced_numerator, &reduced_denominator);

    printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);
    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator,
            int *reduced_denominator) {
    int n, m, r;

    // Using Euclid's algorithm, let n and m be variables containing
    // the numerator and denominator. If n is 0 then stop and m
    // contains the GCD. Otherwise, compute the remainder when m is
    // divided by n. Copy n into m, and copy the remainder into n.
    // Repeat the process until n is 0.

    n = numerator;
    m = denominator;

    while (n > 0) {
        r = m % n;
        m = n;
        n = r;
    }

    *reduced_numerator = numerator / m;
    *reduced_denominator = denominator / m;
}
