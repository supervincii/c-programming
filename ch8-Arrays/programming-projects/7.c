#include <stdio.h>

int main(void) {
    int arr[5][5] = {0};
    int total = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Row totals:");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            total += arr[i][j];
        }
        printf(" %d", total);
        total = 0;
    }
    printf("\n");

    printf("Column totals:");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            total += arr[j][i];
        }
        printf(" %d", total);
        total = 0;
    }
    printf("\n");

    return 0;
}
