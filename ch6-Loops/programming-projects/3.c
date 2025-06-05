#include <stdio.h>

int main(void) {
    int num, denom;
    int n, m, r;

    printf("Enter a fraction: ");
    scanf("%d /%d", &num, &denom);
    
    n = num;
    m = denom;

    while (n > 0) {
        r = m % n;
        m = n;
        n = r;
    }

    printf("In lowest terms: %d/%d\n", num/m, denom/m);
    return 0;
}
