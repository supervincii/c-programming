#include <ctype.h>
#include <stdio.h>

#define MAX_LEN 100

int main(void) {
    char message[MAX_LEN];
    char ch, *hi = message, *lo = message;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && hi < message + MAX_LEN)
        if (isalpha(ch))
            *hi++ = ch;
    hi--;

    while (hi != lo) {
        if (toupper(*hi) == toupper(*lo)) {
            hi--;
            lo++;
        }
        else {
            printf("Not a palindrome\n");
            return 0;
        }
    }

    printf("Palindrome\n");
    return 0;
}
