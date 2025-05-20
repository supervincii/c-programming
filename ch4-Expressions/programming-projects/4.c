#include <stdio.h>

int main(void) {
    int num, octal, last_digit;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    last_digit = num % 8;
    
    printf("In octal, your number is: %o\n", num);

    return 0;
}
