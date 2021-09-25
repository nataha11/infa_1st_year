#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *a;
    
    scanf ("%d", &n);
    
    a = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf ("%d", a + i);
    }
    ;
    int sum = 0;
    int i, k;
    for (k = 0; k <= 9; k++) {
        for (i = 0; i < n; i++) {
            if (a[i] == k) {
                sum = sum + 1;
            }
        }
        printf("%d %d\n", k, sum);
        sum = 0;
    };
    return 0;
}
