#include <stdio.h>

int main(void) {
    int inum, m, d, y;
    float uprice;

    printf("Enter item number: ");
    scanf("%d", &inum);
    printf("Enter unit price: ");
    scanf("%f", &uprice);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d /%d /%d", &m, &d, &y);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$ %.2f\t\t%.2d/%.2d/%4d\n", inum, uprice, m, d, y);

    return 0;
}
