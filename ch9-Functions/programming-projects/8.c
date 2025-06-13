#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void) {
    int wins = 0, losses = 0;
    bool game;
    char ch = 'y';

    srand((unsigned) time(NULL));
    while (ch == 'y' || ch == 'Y') {
        game = play_game();
        if (game)
            wins++;
        else
            losses++;
        printf("Play again? (y/n): ");
        scanf(" %c", &ch);
    }

    printf("Wins: %d\tLosses: %d\n", wins, losses);
    return 0;
}

int roll_dice(void) {
    int d1, d2;

    d1 = rand() % 6 + 1;
    d2 = rand() % 6 + 1;

    return d1 + d2;
}

bool play_game(void) {
    int point, val = 0;
    point = roll_dice();
    printf("You rolled: %d\n", point);
    if (point == 7 || point == 11) {
        printf("You win!\n");
        return true;
    } else if (point == 2 || point == 3 || point == 12) {
        printf("You lose!\n");
        return false;
    } else {
        printf("Your point is %d\n", point);
        while(val != point) {
            val = roll_dice();
            printf("You rolled: %d\n", val);
            if (val == 7) {
                printf("You lose!\n");
                return false;
            }
        }
        printf("You win!\n");
        return true;
    }
}
