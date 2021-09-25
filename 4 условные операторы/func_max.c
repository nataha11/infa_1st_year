#include <stdio.h>

int max(int a, int b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}

int main()
{   
    int x, y;
    scanf ("%d%d", &x, &y);
    int m = max(x, y);
    printf("%d\n", m);

	return 0;
}