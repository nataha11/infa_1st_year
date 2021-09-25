#include <stdio.h>
#include <stdlib.h>

int cmp (const void * p1, const void * p2) {
    long long x = *(long long*)p1;
    long long y = *(long long*)p2;
    if (x < y) 
        return -1;
    else if (x > y)
        return 1;
    else 
        return 0;
}

int main()
{
    int n;
    scanf ("%d", &n);
    long long * a = calloc (n, sizeof(long long));
    for (int i = 0; i < n; i++) {
        scanf ("%lld", a + i);
    }
    qsort (a, n, sizeof (long long), cmp);
    for (int i = n - 1; i >= 0; i--) {
        printf ("%lld ", a[i]);
    }
    free (a);
    return 0;
}