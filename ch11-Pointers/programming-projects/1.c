#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void) {
    int amount, twenty, ten, five, one;

    printf("Enter dollar amount: ");
    scanf("%d", &amount);

    pay_amount(amount, &twenty, &ten, &five, &one);

    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf("$5 bills: %d\n", five);
    printf("$1 bills: %d\n", one);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
    *twenties = dollars / 20;
    dollars = dollars - (*twenties * 20);

    *tens = dollars / 10;
    dollars = dollars - (*tens * 10);

    *fives = dollars / 5;
    dollars = dollars - (*fives * 5);

    *ones = dollars / 1;
    dollars = dollars - (*ones * 1);    
}
