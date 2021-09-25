#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);
    int a[9][2] = {{5000, 0}, {1000, 0}, {500, 0}, {100, 0}, {50, 0}, {10, 0}, {5, 0}, {2, 0}, {1, 0}};
    for (int i = 0; i < 9; i++) {
        a[i][1] = x / a[i][0];
        x = x - a[i][1] * a[i][0];
    }
    ;
    for (int i = 0; i < 9; i++) {
        for (int y = 0; y < 2; y++)
            printf("%d ", a[i][y]);
        printf ("\n");
    }
    ;
    return 0;
}