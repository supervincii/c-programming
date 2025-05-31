#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4;
    int max, min;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    max = min = n1;

    if (n2 > max) max = n2;
    else if (n2 < min) min = n2;

    if (n3 > max) max = n3;
    else if (n3 < min) min = n3;

    if (n4 > max) max = n4;
    else if (n4 < min) min = n4;

    printf("The largest integer is %d\n", max);
    printf("The smallest integer is %d\n", min);

    return 0;
}
