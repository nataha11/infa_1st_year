#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *a, *b;
    scanf ("%d", &n);
    a = (int *)calloc(n, sizeof(int));
    b = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf ("%d", a + i);
    }
    ;
    for (int i = 0; i < n; i++) {
        scanf ("%d", b + i);
    }
    ;
    int scal = 0;
    for (int i = 0; i < n; i++) {
        scal += a[i] * b[i];
    } 
    printf("%d\n", scal); 
    return 0;
}