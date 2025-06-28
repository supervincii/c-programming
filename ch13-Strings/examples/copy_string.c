char *my_strcat(char *s1, const char *s2) {
    char *p = s1;

    // Locate the null character at the end of the string s1 and
    // make p point to it.
    while (*p != '\0')
        p++;

    // Copy characters one-by-one from s2 to where p is pointing.
    while (*s2 != '\0') {
        *p = *s2;
        p++;
        s2++;
    }
    *p = '\0';
    return s1;
}

char *my_strcat2(char *s1, const char *s2) {
    char *p = s1;
    while (*p)
        p++;
    while ((*p++ = *s2++))
        ;
    return s1;
}
