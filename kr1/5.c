#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int sum = 0;
    scanf ("%d", &n);
    int a[1000]

    for (int i = 1; i <= n; i++) {
        scanf ("%d", a + i);
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] % 7 == 0){
            sum += a[i];
        }
    }
    printf("%d", sum);
    return 0;
}