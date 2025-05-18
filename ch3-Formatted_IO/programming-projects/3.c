#include <stdio.h>

int main(void) {
    int gs1, gid, pub_code, inum, check_digit;
    
    printf("Enter ISBN: ");
    scanf("%d -%d -%d -%d -%d", &gs1, &gid, &pub_code, &inum, &check_digit);

    printf("GS1 Prefix: %d\n", gs1);
    printf("Group Identifier: %d\n", gid);
    printf("Publisher Code: %d\n", pub_code);
    printf("Item Number: %d\n", inum);
    printf("Check Digit: %d\n", check_digit);

    return 0;
}
