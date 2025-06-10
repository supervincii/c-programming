#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
    char ch, arr[26] = {0};
    bool anagram = true;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch))
            arr[toupper(ch) - 'A']++;
    }

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch))
            arr[toupper(ch) - 'A']--;
    }

    for (int i = 0; i < 26; i++) {
        if (arr[i] != 0) {
            anagram = false;
            break;
        }
    }

    if (anagram)
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}
