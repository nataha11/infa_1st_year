#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *a;
    scanf ("%d", &n);
    a = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf ("%d", a + i);
    };
    int x;
    int flag = 0;
    scanf ("%d", &x);
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            printf ("%d ", i);
            flag = 1;
            break;
        }
    } 
    if (flag == 0)
        printf("-1");

    return 0;
}