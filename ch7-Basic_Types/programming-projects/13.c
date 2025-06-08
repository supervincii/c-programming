#include <stdio.h>

int main(void) {
    char ch;
    float w_count = 0, l_count = 0, avg_w_length;

    printf("Enter a sentence: ");
    ch = getchar();

    while (ch != '\n') {
        if (ch != ' ')
            l_count++;
        if (ch == ' ')
            w_count++;
        ch = getchar();
    }
    w_count++;
    avg_w_length = l_count / w_count;

    printf("Average word length: %.1f\n", avg_w_length);
    return 0;
}
