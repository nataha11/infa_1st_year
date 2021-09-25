#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *a;
    scanf ("%d", &n);
    a = (int *)calloc(n, sizeof(int));

    for (int i = 1; i <= n; i++) {
        scanf ("%d", a + i);
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] % 2 == 0)
            printf ("%d ", a[i]);
    }
    printf ("\n");
    for (int i = 1; i <= n; i++) {
        if (a[i] % 2 != 0)
            printf ("%d ", a[i]);
    }
    return 0;
}
