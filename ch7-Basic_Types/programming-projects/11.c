#include <stdio.h>

int main(void) {
    char first, last;
    printf("Enter a first and last name: ");
    scanf(" %c", &first);

    while ((last = getchar()) != ' ') ;
    while ((last = getchar()) == ' ') ;
    while (last != '\n' && last != ' ') {
        putchar(last);
        last = getchar();
    }

    printf(", %c.\n", first);
    return 0;
}
