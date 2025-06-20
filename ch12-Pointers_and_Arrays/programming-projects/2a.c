#include <ctype.h>
#include <stdio.h>

#define MAX_LEN 100

int main(void) {
    char message[MAX_LEN];
    char ch;
    int i = 0, l = 0;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n')
        if (isalpha(ch))
            message[i++] = ch;

    i--;

    while (i != l) {
        if (toupper(message[i]) == toupper(message[l])) {
            i--;
            l++;
        }
        else {
            printf("Not a palindrome\n");
            return 0;
        }
    }

    printf("Palindrome\n");
    return 0;
}
