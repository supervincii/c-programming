#include <stdio.h>

int main(void) {
    int base_num = 1 ,max;

    printf("Enter computation limit for printing even squares: ");
    scanf("%d", &max);

    while ((base_num * base_num) <= max) {
        if ((base_num * base_num) % 2 == 0)
            printf("%d\n", base_num * base_num);
        base_num++;
    }

    return 0;
}
