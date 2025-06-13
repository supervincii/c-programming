#include <stdio.h>

int power(int x, int n);

int main(void) {
    int x, n;
    long value;

    printf("Enter the value for the base number: ");
    scanf("%d", &x);
    printf("Enter the value to raise the base number: ");
    scanf("%d", &n);

    value = power(x, n);

    printf("%d raised to %d is %ld\n", x, n, value);
    return 0;
}

int power(int x, int n) {
    if (n == 0)
        return 1;
    else if (n % 2 == 0) {
        int temp = power(x, n/2);
        return temp * temp;
    }
    else
        return x * power(x, n - 1);
}    
