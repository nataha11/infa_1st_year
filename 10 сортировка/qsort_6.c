#include <stdio.h>
#include <stdlib.h>

int cmp_int(const void * p1, const void * p2) {
    int x = *(int*)p1;
    int y = *(int*)p2;
    if (x == y)
        return 0;
    int x1 = x % 10;
    int y1 = y % 10;
    if (x1 < y1) 
        return -1;
    else if (x1 > y1)
        return 1;
    else {
        int a = (x - x1) / 10;
        void * pp1 = &a;
        int b = (y - y1) / 10;
        void * pp2 = &b;
        return cmp_int (pp1, pp2);
    }
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
