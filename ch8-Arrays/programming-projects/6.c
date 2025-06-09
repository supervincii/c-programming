#include <ctype.h>
#include <stdio.h>

#define LEN 100

int main(void) {
    char sentence[LEN];

    printf("Enter a message: ");
    for (int i = 0; i < LEN; i++) {
        scanf("%c", &sentence[i]);
        if (sentence[i] == '\n')
            break;
    }
    
    printf("In B1FF-speak: ");
    for (int i = 0; sentence[i] != '\n'; i++) {
        switch (toupper(sentence[i])) {
        case 'A':
            printf("4");
            break;
        case 'B':
            printf("8");
            break;
        case 'E':
            printf("3");
            break;
        case 'I':
            printf("1");
            break;
        case 'O':
            printf("0");
            break;
        case 'S':
            printf("5");
            break;
        default:
            printf("%c", toupper(sentence[i]));
            break;
        }
    }
    printf("!!!!!!!!!!\n");
    return 0;
}
