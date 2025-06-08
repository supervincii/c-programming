#include <ctype.h>
#include <stdio.h>

int main(void) {
    char ch;
    int count = 0;
    
    printf("Enter a sentence: ");
    ch = getchar();

    while (ch != '\n') {
        switch (toupper(ch)) {
        case 'A': case 'E': case 'I': case 'O': case 'U':
            count += 1;
            break;
        default:
            break;
        }
        ch = getchar();
    }
    printf("Your sentence contains %d vowels.\n", count);
    return 0;
}
