#include <stdio.h>

int main(void) {
    char msg[100];
    int shift;

    printf("Enter message to be encrypted: ");
    for (int i = 0; i < 100; i++) {
        scanf("%c", &msg[i]);
        if (msg[i] == '\n')
            break;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    printf("Encrypted message: ");
    for (int i = 0; msg[i] != '\n'; i++) {
        if (msg[i] >= 'A' && msg[i] <= 'Z')
            printf("%c", ((msg[i] - 'A') + shift) % 26 + 'A');
        else if (msg[i] >= 'a' && msg[i] <= 'z')
            printf("%c", ((msg[i] - 'a') + shift) % 26 + 'a');
        else
            printf("%c", msg[i]);
    }
    printf("\n");
    return 0;
}
