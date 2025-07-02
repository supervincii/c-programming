#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sum = 0;
    for (int i = 0; i < argc; i++) {
        // `atoi` converts command line arguments from string form
        // to integer form.
        sum += atoi(argv[i]);
    }
    printf("Total: %d\n", sum);
    return 0;
}
