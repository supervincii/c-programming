#include <stdio.h>

int main(void) {
    char terminating_char, sentence[100] = {0};
    int end;
    
    printf("Enter a sentence: ");
    for (int i = 0; i < 100; i++) {
        scanf("%c", &sentence[i]);
        if (sentence[i] == '\n') {
            terminating_char = sentence[i - 1];
            end = i - 1;
            break;
        }
    }

    printf("Reversal of sentence: ");
    for (int i = end; i >= 0; i--) {
        if (sentence[i] == ' ') {
            for (int j = i + 1; j < end; j++) {
                printf("%c", sentence[j]);
            }
            printf(" ");
            end = i;
        }
        if (i == 0) {
            for (int j = i; j < end; j++) {
                printf("%c", sentence[j]);
            }
            printf("%c\n", terminating_char);
        }
    }
    return 0;
}
