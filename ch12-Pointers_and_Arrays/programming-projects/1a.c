#include <stdio.h>

#define MAX_LEN 120

int main(void) {
    char msg[MAX_LEN], ch;
    int i = 0;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n')
        msg[i++] = ch;

    printf("Reversal is: ");
    i--;
    while (i >= 0) {
        printf("%c", msg[i]);
        i--;
    }


    printf("\n");
    return 0;
}
