#include <stddef.h>

size_t my_strlen(const char *s) {
    size_t n;

    for (n = 0; *s != '\0'; s++)
        n++;
    return n;
}

size_t my_strlen2(const char *s) {
    size_t n = 0;

    for (; *s != '\0'; s++)
        n++;
    return n;
}

size_t my_strlen3(const char *s) {
    size_t n = 0;

    for (; *s; s++)
        n++;
    return n;
}

size_t my_strlen4(const char *s) {
    size_t n = 0;

    for (; *s++;)
        n++;
    return n;
}

size_t my_strlen5(const char *s) {
    size_t n = 0;

    while (*s++)
        n++;
    return n;
}

size_t my_strlen_faster(const char *s) {
    // The speed improvement here comes from not having to increment
    // n inside the while loop.

    // What we are doing here is assigning `p` to the position of
    // the first character in the string and subtracting from it
    // the position of the null character.
    const char *p = s;
    while (*s)
        s++;
    return s - p;
}
