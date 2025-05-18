#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;
    int rsum1, rsum2, rsum3, rsum4, csum1, csum2, csum3, csum4, dsum1, dsum2;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf(" %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

    printf("%2d %2d %2d %2d\n", n1, n2, n3 ,n4);
    printf("%2d %2d %2d %2d\n", n5, n6, n7 ,n8);
    printf("%2d %2d %2d %2d\n", n9, n10, n11 ,n12);
    printf("%2d %2d %2d %2d\n\n", n13, n14, n15 ,n16);

    rsum1 = n1 + n2 + n3 + n4;
    rsum2 = n5 + n6 + n7 + n8;
    rsum3 = n9 + n10 + n11 + n12;
    rsum4 = n13 + n14 + n15 + n16;

    csum1 = n1 + n5 + n9 + n13;
    csum2 = n2 + n6 + n10 + n14;
    csum3 = n3 + n7 + n11 + n15;
    csum4 = n4 + n8 + n12 + n16;

    dsum1 = n1 + n6 + n11 + n16;
    dsum2 = n4 + n7 + n10 + n13;

    printf("Row sums: %d %d %d %d\n", rsum1, rsum2, rsum3, rsum4);
    printf("Column sums: %d %d %d %d\n", csum1, csum2, csum3, csum4);
    printf("Diagonal sums: %d %d\n", dsum1, dsum2);

    return 0;
}
