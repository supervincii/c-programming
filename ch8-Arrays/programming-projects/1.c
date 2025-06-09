/* Checks numbers for repeated digits */

#include <stdbool.h>
#include <stdio.h>

#define SIZE ((int)(sizeof(digit_seen) / sizeof(digit_seen[0])))

int main(void) {
    int digit_seen[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_seen[digit] += 1;
        n /= 10;
    }

    printf("Repeated digit(s):");
    for (int i = 0; i < SIZE; i++) {
        if (digit_seen[i] > 1) {
            printf(" %d", i);
        }
    }
    printf("\n");
    
    return 0;
}
