#include <stdio.h>
#include <stdlib.h>

int cmp_int(const void * p1, const void * p2) {
    int x = *(int*)p1;
    int y = *(int*)p2;
    if (x < y) 
        return -1;
    else if (x > y)
        return 1;
    return 0;
}

int main() {
    int n;
    scanf ("%d", &n);
    int * a = calloc (n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf ("%d", a + i);
    }
    qsort (a, n, sizeof (int), cmp_int);
    for (int i = 0; i < n; i++) {
        printf ("%d ", a[i]);
    }
    free (a);
    return 0;
}
