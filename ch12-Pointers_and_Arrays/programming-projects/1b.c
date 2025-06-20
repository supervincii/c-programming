#include <stdio.h>

#define MAX_LEN 120

int main(void) {
    char msg[MAX_LEN], ch;
    
    // Pointer that points to the first element of msg
    char *p = msg; 

    printf("Enter a message: ");
    // Loop through the msg array until input is a new line character.
    // Also check if p (pointer to an address) is less than the address of the MAX_LEN of the array.
    while ((ch = getchar()) != '\n' && p < msg + MAX_LEN)
        // Put the input value (ch) to where p is pointing at.
        // Increment p (pointer)
        *p++ = ch;

    // Decrement p because it currently points one position past 
    // the last character we stored.
    p--;
    printf("Reversal is: ");
    // While p (pointer) is greater than / equal to the address of
    // the first element of the message array, print the value
    // of where p is pointing at, then decrement p(pointer).
    while (p >= msg)
        putchar(*p--);

    printf("\n");
    return 0;
}
