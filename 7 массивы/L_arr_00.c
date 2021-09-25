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
    for (int k = 1; k <= 2; k++){
        for (int i = 1; i <= n; i++) {
            printf ("%d ", a[i]);
        }
    }
    return 0;
}