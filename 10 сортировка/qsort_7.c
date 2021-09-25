#include <stdio.h>
#include <stdlib.h>

int cmp_int(const void * p1, const void * p2) {
    int x = *(int*)p1;
    int y = *(int*)p2;
    if (x < y) 
         return -1;
    else if (x > y)
         return 1;
    else 
         return 0;
}

int main() {
    int n; 
    scanf ("%d", &n);
    int * a = calloc (n, sizeof(int));
    int * b = calloc (n, sizeof(int));
    int k = 0;
    for (int i = 0; i < n; i++) {
        scanf ("%d", a + i);
        if (a[i] % 2 == 0) {
            b[k] = a[i];
            k++;
        }
    }

    qsort (b, k, sizeof (int), cmp_int);

    k = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            a[i] = b[k];
            k++;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    free (a);
    free (b);
    return 0;
}