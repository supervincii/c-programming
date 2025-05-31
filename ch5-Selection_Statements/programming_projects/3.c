/* Calculates a broker's commission */


#include <stdio.h>

int main(void) {
    float commission, r_commission, value, price_per_share;
    int shares;

    printf("Enter the number of shares: ");
    scanf("%d", &shares);
    printf("Enter the price per share: ");
    scanf("%f", &price_per_share);

    value = shares * price_per_share;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 50.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;


    if (shares < 2000) {
	r_commission = 33 + (0.03 * shares);
    }
    else {
	r_commission = 33 + (0.02 * shares);
    }

    printf("Original broker commission: $%.2f\n", commission);
    printf("Rival broker commission: $%.2f\n", r_commission);

    return 0;
}
