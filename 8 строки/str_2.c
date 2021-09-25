int my_strlen(const char *s) {
    int i;
    for (i = 0; s[i] != '\0'; i++);
    return i;
}

char *my_strcpy(char *dest, const char *src) {
    int i;
    int n = my_strlen (src);
    for (i = 0; i < n + 1; i++)
        dest[i] = src[i];
    return dest;
}