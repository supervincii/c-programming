#include <stdio.h>

int main(void) {
    int days, starting_day;
    
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week: ");
    scanf("%d", &starting_day);

    for (int i = 1, wk_day = starting_day; i <= days; i++) {
        while (starting_day > 1) {
            printf("\t");
            starting_day--;
        }

        if (wk_day != 7) {
            printf("%d\t", i);
            wk_day++;
        }
        else {
            printf("\n");
            wk_day = 1;
        }
    }

    printf("\n");

    return 0;
}
