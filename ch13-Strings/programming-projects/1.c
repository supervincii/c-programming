// Finds the smallest and largest in a series of words.
// The program will end when the user inputs a four-letter-word.
// Assume no word is more than 20 letters long.

#include <stdio.h>
#include <string.h>

#define MAX_LEN 20

int main(void) {
    char smallest_string[MAX_LEN + 1], largest_string[MAX_LEN + 1], *input;

    printf("Enter word: ");
    scanf("%s", input);

    strcpy(smallest_string, input);
    strcpy(largest_string, input);

    while (strlen(input) != 4) {
	if (strcmp(input, smallest_string) < 0)
	    strcpy(smallest_string, input);

	if (strcmp(input, largest_string) > 0)
	    strcpy(largest_string, input);

	printf("Enter word: ");
	scanf("%s", input);
    }

    printf("Smallest word: %s\n", smallest_string);
    printf("Largest word: %s\n", largest_string);

    return 0;
}
