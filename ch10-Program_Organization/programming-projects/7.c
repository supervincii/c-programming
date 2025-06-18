#include <ctype.h>
#include <stdio.h>

#define MAX_DIGITS 10

/* 7-segment representations for digits 0-9:
 *
 *    _0_
 * 5 |   | 1
 *   |_6_|
 * 4 |   | 2
 *   |_3_|
 */

const int segments[10][7] = {
    {1, 1, 1, 1, 1, 1, 0}, // 0
    {0, 1, 1, 0, 0, 0, 0}, // 1
    {1, 1, 0, 1, 1, 0, 1}, // 2
    {1, 1, 1, 1, 0, 0, 1}, // 3
    {0, 1, 1, 0, 0, 1, 1}, // 4
    {1, 0, 1, 1, 0, 1, 1}, // 5
    {1, 0, 1, 1, 1, 1, 1}, // 6
    {1, 1, 1, 0, 0, 0, 0}, // 7
    {1, 1, 1, 1, 1, 1, 1}, // 8
    {1, 1, 1, 1, 0, 1, 1}, // 9
};
char digits[4][MAX_DIGITS * 4];
int segment_grid[7][2] = {
    {0, 1},
    {1, 2},
    {2, 2},
    {2, 1},
    {2, 0},
    {1, 0},
    {1, 1}
};

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void) {
    char ch;
    int position = 0; // `position` keeps track of the starting column for the current digit.

    clear_digits_array();

    printf("Enter a number: ");
    while ((ch = getchar()) != '\n') {
        if (isdigit(ch)) {
            process_digit(ch - '0', position);
            position += 4;
        }
    }

    print_digits_array();
    return 0;
}

void clear_digits_array(void) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < MAX_DIGITS * 4; j++)
            digits[i][j] = ' ';
    }
}

void process_digit(int digit, int positon) {
    int row, col;

    for (int i = 0; i < 7; i++) {
        if (segments[digit][i]) {
            row = segment_grid[i][0];
            col = segment_grid[i][1] + positon;
            digits[row][col] = i % 3 == 0 ? '_' : '|';
        }
    }
}

void print_digits_array(void) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < MAX_DIGITS * 4; j++) {
            putchar(digits[i][j]);
        }
        printf("\n");
    }
}
