#include <stdio.h>

#define MAX_LEN 100

int main(void) {
    char terminating_char, sentence[MAX_LEN] = {0};
    // Declare pointer variables
    char ch, *p, *q;
    
    printf("Enter a sentence: ");
    // Initialize p to point to the first element of the array
    // Check if input is not a new line character and pointer p does not point
    // past the last element of the array
    for (p = sentence; (ch = getchar()) != '\n' && p < sentence + MAX_LEN; p++) {
        // If input character is terminating character, assign it the the variable
        // and break the loop.
        if (ch == '.' || ch == '!' || ch == '?') {
            terminating_char = ch;
            break;
        }
        // Else, assign ch to the value of the address of p.
        *p = ch;
    }

    printf("Reversal of sentence: ");
    while (p >= sentence) {
        while (*--p != ' ' && p != sentence) ;
        q = p == sentence ? sentence : p + 1;
        while (*q != ' ' && *q != '\0')
            putchar(*q++);
        if (p >= sentence)
            putchar(' ');
    }
    printf("\b%c\n", terminating_char);
    return 0;
}
