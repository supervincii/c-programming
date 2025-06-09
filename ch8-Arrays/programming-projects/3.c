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
        while (n > 0) {
            digit = n % 10;
            digit_seen[digit] += 1;
            n /= 10;
        }

        printf("Digit:\t\t");
        for (int i = 0; i < SIZE; i++) {
            printf(" %3d", i);
        }
        printf("\n");

        printf("Occurrences:\t");
        for (int i = 0; i < SIZE; i++) {
            printf(" %3d", digit_seen[i]);
            digit_seen[i] = 0;
        }
        printf("\n");

        printf("Enter a number: ");
        scanf("%ld", &n);
    }
    
    return 0;
}
