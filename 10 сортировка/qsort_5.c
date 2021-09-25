#include <stdio.h>
#include <stdlib.h>
#define N 1000

int cmp_char(const void * p1, const void * p2) {
    char x = *(char*)p1;
    char y = *(char*)p2;
    if (x < y)
        return -1;
    else if (x > y)
        return 1;
    return 0;
}

int main() {
    char a[N + 1];
    int i = 0;
    while (1) {
        scanf ("%c", &(a[i]));
        if (a[i] == '.')
            break;
        i++;
    }
    int n = i;
    qsort (&a, n, sizeof (char), cmp_char);

    for (i = 0; i <= n; i++) {
        printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}
