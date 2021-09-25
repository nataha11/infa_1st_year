#include <stdio.h>
#include <stdlib.h>

int cmp_int(const void * p1, const void * p2) {
    float x = *(float*)p1;
    float y = *(float*)p2;
    if (x < y) 
        return -1;
    else if (x > y)
        return 1;
    return 0;
}

int main() {
    int n;
    scanf ("%d", &n);
    float * a = calloc (n, sizeof(float));
    for (int i = 0; i < n; i++) {
        scanf ("%f", a + i);
    }
    qsort (a, n, sizeof (float), cmp_int);
    for (int i = 0; i < n; i++) {
        printf ("%.2f ", a[i]);
    }
    free (a);
    return 0;
}
