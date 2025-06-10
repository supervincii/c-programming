#include <stdio.h>

int main(void) {
    int size;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &size);

    while (size % 2 == 0) {
        printf("Enter size of magic square: ");
        scanf("%d", &size);
    }

    printf("\n");
    int num = 1;
    int square[size][size];

    // Intialize all positions to zero
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            square[i][j] = 0;
        }
    }

    // Initialize the first value (1) in the magic square.
    int i = 0;
    int j = size / 2;
    square[i][j] = num++;

    while (num <= size * size) {
        int next_i = (i - 1 + size) % size;
        int next_j = (j + 1) % size;

        if (square[next_i][next_j] != 0) {
            next_i = (i + 1) % size;
            next_j = j;
        }

        i = next_i;
        j = next_j;
        square[i][j] = num++;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%5d", square[i][j]);
        }
        printf("\n");
    }

    return 0;
}
