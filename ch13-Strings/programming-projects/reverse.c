#include <stdio.h>

int main(int argc, char *argv[]) {
    // We initialize i = argc - 1 because argv[argc] always
    // points to a null pointer.
    for (int i = argc - 1; i > 0; i--) {
        printf("%s ", argv[i]);
    }
    printf("\n");
    return 0;
}
