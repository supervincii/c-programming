#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char board[10][10] = {0}, ch = 'A';
    int up, down, left, right, i, j, move;

    srand((unsigned) time(NULL));

    // Initialize starting position
    i = rand() % 10;
    j = rand() % 10;
    board[i][j] = ch++;
    
    while (ch <= 'Z') {
        up = down = left = right = 0;

        if (i + 1 < 10 && board[i + 1][j] == 0)
            down = 1;
        if (i - 1 >= 0 && board[i - 1][j] == 0)
            up = 1;
        if (j + 1 < 10 && board[i][j + 1] == 0)
            right = 1;
        if (j - 1 >= 0 && board[i][j - 1] == 0)
            left = 1;

        // Stop the loop when I do not have any other space to move into.
        if (up + down + right + left == 0)
            break;

        move = rand() % 4;

        switch (move) {
        case 0:
            if (up) {
                board[--i][j] = ch++;
                break;
            }
        case 1:
            if (right) {
                board[i][++j] = ch++;
                break;
            }
        case 2:
            if (down) {
                board[++i][j] = ch++;
                break;
            }
        case 3:
            if (left) {
                board[i][--j] = ch++;
                break;
            }
        default:
            break;
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (board[i][j] == 0)
                board[i][j] = '.';

            printf("%c ", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}
